
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
class Student {
public:
Student(const std::string& n, double st_gpa);
bool canGraduate() const;
void printStudentInfo() const;
static double getRequiredGPA();
static void setRequiredGPA(double new_gpa);
static int getTotalStudents();
/*
TODO
1) Create the property to store the total GPA of all the students
2) Create a method which returns an average GPA of all the students
*/
private:
std::string name;
double gpa;
std::string id;
static double required_gpa; // The required GPA to graduate.
static int total_students;
static int next_id;
};
#endif