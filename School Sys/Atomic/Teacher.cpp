#include "Teacher.h"

Teacher::Teacher(string name, float salary, int yearsWorked, string department, Course classTeaching)
:Staff(name, salary, yearsWorked){
    this->department = department;
    this->classTeaching = classTeaching;
}
Teacher::Teacher(string name, float salary, string department, Course classTeaching):Staff(name, salary){
    this->department = department;
    this->classTeaching = classTeaching;
}
Teacher::Teacher():Staff(){

}

void Teacher::setDepartment(string department){
    this->department = department;
}
void Teacher::setClassTeaching(Course classTeaching){
    this->classTeaching = classTeaching;
}
