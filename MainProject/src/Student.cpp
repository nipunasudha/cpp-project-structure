#include "Student.h"
#include <iostream>
#include<string>

Student::Student(const std::string &name):name(name){
    std::cout<< "A New Student created" << std::endl;
}
std::string Student::getName(){
    return name;
}
