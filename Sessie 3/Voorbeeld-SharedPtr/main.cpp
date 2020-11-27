#include <iostream>
#include <memory>
#include "FancyObject.h"

using namespace std;

int main() {
    cout << "===============begin" << endl;

    shared_ptr<FancyObject> f1 = make_shared<FancyObject>("first");
    cout << f1 << endl << " usecount:" << f1.use_count() << endl;

    shared_ptr<FancyObject> f2 = f1;
    cout << f2 << endl << " usecount:" << f1.use_count() << endl;
    shared_ptr<FancyObject> f3 = f1;
    cout << f3 << endl << " usecount:" << f1.use_count() << endl;
    {
        shared_ptr<FancyObject> f4 = f1;
        cout << f4 << endl << " usecount:" << f1.use_count() << endl;
    }

    cout << f1 << endl << " usecount:" << f1.use_count() << endl;

    cout << "===============done" << endl;

    return 0;
}