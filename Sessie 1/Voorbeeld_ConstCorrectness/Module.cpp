#include "Module.h"

Module::Module() {}

Module::~Module() {
}

void Module::addStudent(const std::string& name, int studentNumber) {
    students.push_back(Student(name, studentNumber));
}

Student* const Module::getStudentConstPointer(int studentNumber) const {
    Student* const s = new Student("asdf", 123);
    return s;
}

const Student* Module::getConstStudentPointer(int studentNumber) const {
    return nullptr;
}
