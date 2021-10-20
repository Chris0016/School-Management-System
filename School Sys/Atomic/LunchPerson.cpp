#include "LunchPerson.h"


#include <iostream>

LunchPerson::LunchPerson(string name, float salary, int yearsWorked, string speacialtyDish) 
: Staff(name, salary, yearsWorked){
	this->speacialtyDish = speacialtyDish;
}
LunchPerson::LunchPerson(string name, float salary, string speacialtyDish) 
: Staff(name, salary){
	this->speacialtyDish = speacialtyDish;
}
LunchPerson::LunchPerson() : Staff(){

}

void LunchPerson::setSpeacialtyDish(string speacialtyDish){
	this->speacialtyDish = speacialtyDish;
}

