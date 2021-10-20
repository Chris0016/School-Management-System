#include "Course.h"

Course::Course(string name, string department){
	this->name = name;
	this->department = department;
}
Course::Course(){}

void Course::setName(string name){
	this->name = name;
}
void Course::setDepartment(string department){
	this->department = department;
}

