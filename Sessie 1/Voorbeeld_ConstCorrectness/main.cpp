#include <iostream>
#include "Module.h"

int main() {
    Module module1 = Module();
    module1.addStudent("Pietje Puk", 1234567);

    const Module module2 = Module();
    // compile error: addStudent is not marked as 'const'
//    module2.addStudent("Henkie Puk", 7654321);

    Student* student = module1.getStudentConstPointer(1234567);
//    student = new Student("Henkie", 46378392);
//    student.

    return 0;
}