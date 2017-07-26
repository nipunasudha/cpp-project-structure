#include <iostream>
#include "Student.h"

int main(int argc, char * argv[]){
    std::cout << "=========================================" << std::endl;
    std::cout << "THIS IS A PROPERLY STRUCTURED C++ PROJECT" << std::endl;
    std::cout << "=========================================" << std::endl;
    Student student("Nipuna Sudharaka");
    std::cout << "His name is " << student.getName() << std::endl;
    return 0;
}

