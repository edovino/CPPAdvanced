#include <iostream>
#include <memory>
#include "FancyObject.h"

//void pietje(std::unique_ptr<FancyObject> f) {  // gaat niet: kan niet copieeren
void pietje(std::unique_ptr<FancyObject>& f) {
    std::cout << f.get() << std::endl;
}

int main() {
    std::cout << "===============begin" << std::endl;

    FancyObject* f1 = new FancyObject("first");  // *niet* automatisch opgeruimd

//    std::unique_ptr<FancyObject> f2 = std::unique_ptr<FancyObject>(new FancyObject("second"));
    auto f2 = std::make_unique<FancyObject>("second");

    //        FancyObject f1 = FancyObject("first"); // automatisch opgeruimd


    std::unique_ptr<FancyObject> f3 = std::make_unique<FancyObject>("third");
    std::cout << "f3:" << f3.get() << std::endl;

    std::unique_ptr<FancyObject> f4;
//    f4 = f3;  // is niet mogelijk

    f4 = std::move(f3);  // kan wel: expliciet ownership dorgeven
    std::cout << "f3:" << f3.get() << std::endl;
    std::cout << "f4:" << f4.get() << std::endl;
//
////    f4.reset();
//
    pietje(f4); // alleen als reference (kan niet kopieeren)

    std::cout << "===============done" << std::endl;

    return 0;




}









