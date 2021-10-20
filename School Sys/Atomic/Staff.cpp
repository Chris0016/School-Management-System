#include "Staff.h"


int Staff::numberOfStaff = 0;

Staff::Staff(string name, float salary, int yearsWorked ){
	this->name = name;
	this->salary = salary;
	this->yearsWorked = yearsWorked;
	setID();
	numberOfStaff++;
	
}
Staff::Staff(string name, float salary ){
	this->name = name;
	this->salary = salary;
	yearsWorked = 0;
	setID();
	numberOfStaff++;
}
Staff::Staff(){
	name = "bob";
	salary = 0.0;
	yearsWorked = 0;
	setID();

}

void Staff::setName(string name){this->name = name;}
void Staff::setSalary(float salary){this->salary = salary;}
void Staff::setYearsWorked(int yearsWorked){this->yearsWorked = yearsWorked;}
void Staff::setAccessLevel(accessLevels accessLevel){this->accessLevel = accessLevel;}
void Staff::setID(){
	this->id = numberOfStaff;
}


