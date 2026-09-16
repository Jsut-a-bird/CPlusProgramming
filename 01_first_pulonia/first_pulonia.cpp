
#include <iostream>
/*

Evan Chan
COP 3337
8/19/2026

*/

namespace student{
    int id;
}

namespace course{
    int id;
}

int main(void){
    std::cout << "Enter student ID: ";
    std::cin >> student::id;
    std::cout << "Enter course ID: ";
    std::cin >> course::id;

    std::cout << std::endl << "--- Registration Information ---" << std::endl;
    std::cout << "Student ID: " << student::id << std::endl;
    std::cout << "Course ID: " << course::id << std::endl;

    return 0;
}