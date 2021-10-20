/**
	Adds and removes Students to the list of students and keeps track.
	@file: Student_Manager.cpp
	@author: Christopher Perez
	@version 1.0.0 11/9/20
*/
#include "Student_Manager.h"

Student_Manager::Student_Manager(){}




/**
	Why: Multi-purpose method used to remove elements, get elements, and check if elements exists. 
	@param studentName The name of the student to be found.
	@return -1 if student is not found or the index otherwise.
*/
int Student_Manager::findStudent(string studentName){
	for (int i = 0; i < numberOfStudents; i++){
		if (listOfStudents[i].getName() == studentName ){
			return i;
		}
	}
	return -1;
}

/**
	Why: Used to interpret the results of findStudent(), making code shorter in other areas. 
	@param studentName The name of the student
	@return True if the student is found and False if not. 
*/
bool Student_Manager::studentExist_byName(string studentName){
	return (findStudent(studentName) >= 0);
}

/**
	Why: Used to check if a student should be added or not and shortens code later by interpreting results and calling getName() function. 
	@param student The student to find.
	@return True if the student is found and False if not. 
*/
bool Student_Manager::studentExist(Student inputStudent){
	return (findStudent(inputStudent.getName()) >= 0);
}

/**
	@param studentName The studentName of the student to be returned.
	@return The student obj or error if student cannot be found.
*/
Student Student_Manager::getStudent(string studentName){
	int idx = findStudent(studentName);
	if (idx == -1) throw "Student does not exist";

	return listOfStudents[idx];
}

/**
	@param none
	@return number of students
*/
int Student_Manager::getNumberOfStudents(){
	return numberOfStudents;
}

/**
	Why: To remove a student given a string. 
	@param studentName The name of the student to be removed.
	@return 0 if student was successfully removed and 1 otherwise(student was not found).

*/
int Student_Manager::removeStudent(string studentName){
	int index = findStudent(studentName);
	if (index >= 0 ){
		removeFromList(index);
		return 0;
	}
	return 1;
}

/** 
	Why: The most efficient way to "remove" an element is to reshift the list and reduce the tracker variable.
	@param idx The index of the student to be removed. 
	@return void
*/
void  Student_Manager::removeFromList(int idx){

	if (idx < 0 || idx >= numberOfStudents  ) return;
	
	if (idx + 1  != MAX_STUDENT_AMOUNT){			//Do not reshift list if the last element is being removed.
		for(int i = idx; i < numberOfStudents -1; i++){
			listOfStudents[i] = listOfStudents[i+1];
		}
	}
	numberOfStudents--;
}
/** 
	@param studentIn The student to be added. 
	@return 0 if the student was successfully added to the list of students and 1 otherwise. 
*/
int Student_Manager::addStudent(Student studentIn){
	
	if (numberOfStudents == MAX_STUDENT_AMOUNT || Student_Manager::studentExist(studentIn)) return 1;

	listOfStudents[numberOfStudents++] = studentIn;

	return 0;
}
/**
	Why: Used for testing and other inexplicit reasons. 
	@param none
	@return none
*/

void Student_Manager::printStudents(){
	for (int i = 0; i < numberOfStudents; i++){
		cout << listOfStudents[i].getName() << endl;
	}
}






