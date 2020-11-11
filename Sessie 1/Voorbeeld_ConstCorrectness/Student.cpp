#include <string>
#include "Student.h"

Student::Student(std::string name, int studentNumber) {}

const std::string& Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}
