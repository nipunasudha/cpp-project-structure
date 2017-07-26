#pragma once
#include <string>
class Student{
    private:
        std::string name;
    public:
        Student(const std::string &name);
        std::string getName();
};
