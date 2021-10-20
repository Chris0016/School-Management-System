#include "Admin.h"

Admin::Admin(string name, float salary, int yearsWorked, string department)
: Staff(name, salary, yearsWorked){
	this->department = department;
	setAccessLevel(accessLevels::Administrator);
}
Admin::Admin(string name, float salary, string department)
: Staff(name, salary){
	this->department = department;
	setAccessLevel(accessLevels::Administrator);
}
Admin::Admin() : Staff(){

}

void Admin::setDepartment(string department){
	this->department = department;
}