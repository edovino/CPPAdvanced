#pragma once


class Student {
    public:
        Student(std::string name, int studentNumber);

        const std::string& getName() const;
        int getStudentNumber() const;

    private:
        std::string name;
        int studentNumber;
};

