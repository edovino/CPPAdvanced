#pragma once

#include <string>
#include <vector>
#include "Student.h"

class Module {
    public:
        Module();
        virtual ~Module();

        void addStudent(const std::string& name, int studentNumber);
        Student* const getStudentConstPointer(int studentNumber) const;
        const Student* getConstStudentPointer(int studentNumber) const;

    private:
        std::vector<Student> students;
};

