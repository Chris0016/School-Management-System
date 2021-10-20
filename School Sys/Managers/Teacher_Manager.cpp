/**
	Adds and removes Teachers to the list of clubs and keeps track.
	@file: Teacher_Manager.cpp
	@author: Christopher Perez
	@version 1.0.0 11/9/20
*/

#include "Teacher_Manager.h"
#include <iostream>

using namespace std;

Teacher_Manager::Teacher_Manager(){}


/**
	Why: Multi-purpose method used to remove elements, get elements, and check if elements exists. 
	@param teacherName The name of the club to be found.
	@return -1 if club is not found or the index otherwise.
*/
int Teacher_Manager::findTeacher(int teacherID){
	for (int i = 0; i < numberOfTeachers; i++){
		if (listOfTeachers[i].getID() == teacherID ){
			return i;
		}
	}
	return -1;
}

/**
	Why: Used to interpret the results of findTeacher(), making code shorter in other areas. 
	@param teacherName The name of the club
	@return True if the club is found and False if not. 
*/
bool Teacher_Manager::teacherExist_byID(int teacherID){
	return (findTeacher(teacherID) >= 0);
}

/**
	Why: Used to check if a club should be added or not and shortens code later by interpreting results and calling getID() function. 
	@param club The club to find.
	@return True if the club is found and False if not. 
*/
bool Teacher_Manager::teacherExist(Teacher inputTeacher){
	return (findTeacher(inputTeacher.getID()) >= 0);
}

/**
	@param teacherName The teacherName of the club to be returned.
	@return The club obj or error if club cannot be found.
*/
Teacher Teacher_Manager::getTeacher(int teacherID){
	int idx = findTeacher(teacherID);
	if (idx == -1) throw "Teacher does not exist";

	return listOfTeachers[idx];
}
/** 
 	*Why: Provides an alternative to getting a Teacher Obj.
 	@param idx The index of the teacher to be retrived
	@return Teacher[idx] The teacher to be returned. 
*/
Teacher Teacher_Manager::getTeacherByIdx(int idx){
	if (idx < 0 || idx >= numberOfTeachers){
		throw "Index out of bounds";
	}
	return listOfTeachers[idx];
}
/**
	@param none
	@return number of clubs
*/
int Teacher_Manager::getNumberOfTeachers(){
	return numberOfTeachers;
}

/**
	Why: To remove a club given a string. 
	@param teacherName The name of the club to be removed.
	@return 0 if club was successfully removed and 1 otherwise(club was not found).

*/
int Teacher_Manager::removeTeacher(int teacherID){
	int index = findTeacher(teacherID);
	if (index >= 0 ){
		removeFromList(index);
		return 0;
	}
	return 1;
}

/** 
	Why: The most efficient way to "remove" an element is to reshift the list and reduce the tracker variable.
	@param idx The index of the club to be removed. 
	@return void
*/
void  Teacher_Manager::removeFromList(int idx){

	if (idx < 0 || idx >= numberOfTeachers  ) return;
		
	if (idx + 1 != MAX_TEACHER_AMOUNT){			//Do not reshift list if the last element is being removed.
		for(int i = idx; i < numberOfTeachers - 1 ; i++){
			listOfTeachers[i] = listOfTeachers[i+1];	
		}
	}
	numberOfTeachers--;
	
}

/** 
	@param teacherIn The club to be added. 
	@return 0 if the club was successfully added to the list of clubs and 1 otherwise. 
*/
int Teacher_Manager::addTeacher(Teacher teacherIn){
	
	if (numberOfTeachers == MAX_TEACHER_AMOUNT || Teacher_Manager::teacherExist(teacherIn)) return 1;

	listOfTeachers[numberOfTeachers++] = teacherIn;

	return 0;
}
/**
	Why: Used for testing and other inexplicit reasons. 
	@param none
	@return none
*/

void Teacher_Manager::printTeachers(){
	for (int i = 0; i < numberOfTeachers; i++){
		cout << listOfTeachers[i].getName() << endl;
	}
}

