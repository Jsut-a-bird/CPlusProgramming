#include "Student.hpp"
#include <iostream> 

int main(void) {
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;
    
    Student bob("Bob", 3.1);
    Student alice("Alice", 2.1);
    
    bob.printStudentInfo();
    alice.printStudentInfo();
    
    std::cout << "Required GPA: " << Student::getRequiredGPA() << std::endl;
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;


    return 0;
}