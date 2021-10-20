#include "Student.h"

Student::Student(string name, int age, int grade, string favoriteSubject){
	this->name = name;
	this->age = age;
	this->grade = grade;
	this->favoriteSubject = favoriteSubject;
}
Student::Student(string name, int age, int grade){
	this->name = name;
	this->age = age;
	this->grade = grade;
	this->favoriteSubject = "No favorite subject selected";
}
Student::Student(){
	this->name = "";
	this->age = 0;
	this->grade = 0;
	this->favoriteSubject = "";
}


void Student::setName(string name){this->name = name;}
void Student::setAge(int age){this->age = age;}
void Student::setGrade(int grade){this->grade = grade;}
void Student::setFavoriteSubject(string favSubject){this->grade = grade;}

