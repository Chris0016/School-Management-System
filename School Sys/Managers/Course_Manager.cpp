/**
	Adds and removes Courses to the list of courses and keeps track.
	@file: Course_Manager.cpp
	@author: Christopher Perez
	@version 1.0.0 11/10/20
*/

#include "Course_Manager.h"

Course_Manager::Course_Manager(){}


/**
	Why: Multi-purpose method used to remove elements, get elements, and check if elements exists. 
	@param courseName The name of the course to be found.
	@return -1 if course is not found or the index otherwise.
*/
int Course_Manager::findCourse(string courseName){
	for (int i = 0; i < numberOfCourses; i++){
		if (listOfCourses[i].getCourseName() == courseName ){
			return i;
		}
	}
	return -1;
}

/**
	Why: Used to interpret the results of findCourse(), making code shorter in other areas. 
	@param courseName The name of the course
	@return True if the course is found and False if not. 
*/
bool Course_Manager::courseExist_byName(string courseName){
	return (findCourse(courseName) >= 0);
}

/**
	Why: Used to check if a course should be added or not and shortens code later by interpreting results and calling getName() function. 
	@param course The course to find.
	@return True if the course is found and False if not. 
*/
bool Course_Manager::courseExist(Course inputCourse){
	return (findCourse(inputCourse.getCourseName()) >= 0);
}

/**
	@param courseName The courseName of the course to be returned.
	@return The course obj or error if course cannot be found.
*/
Course Course_Manager::getCourse(string courseName){
	int idx = findCourse(courseName);
	if (idx == -1){
		cout << "Course " << courseName << " does not exist"<< endl;
		throw "Course does not exist";
	} 

	return listOfCourses[idx];
}

/**
	@param none
	@return number of courses
*/
int Course_Manager::getNumberOfCourses(){
	return numberOfCourses;
}

/**
	Why: To remove a course given a string. 
	@param courseName The name of the course to be removed.
	@return 0 if course was successfully removed and 1 otherwise(course was not found).

*/
int Course_Manager::removeCourse(string courseName){
	int index = findCourse(courseName);
	if (index >= 0 ){
		removeFromList(index);
		return 0;
	}
	return 1;
}

/** 
	Why: The most efficient way to "remove" an element is to reshift the list and reduce the tracker variable.
	@param idx The index of the course to be removed. 
	@return void
*/
void  Course_Manager::removeFromList(int idx){

	if (idx < 0 || idx >= numberOfCourses  ) return;
	
	if (idx + 1  != MAX_COURSE_AMOUNT){			//Do not reshift list if the last element is being removed.
		for(int i = idx; i < numberOfCourses -1; i++){
			listOfCourses[i] = listOfCourses[i+1];
		}
	}
	numberOfCourses--;
}
/** 
	@param courseIn The course to be added. 
	@return 0 if the course was successfully added to the list of courses and 1 otherwise. 
*/
int Course_Manager::addCourse(Course courseIn){
	
	if (numberOfCourses == MAX_COURSE_AMOUNT || Course_Manager::courseExist(courseIn)) return 1;

	listOfCourses[numberOfCourses++] = courseIn;

	return 0;
}
/**
	Why: Used for testing and other inexplicit reasons. 
	@param none
	@return none
*/

void Course_Manager::printCourses(){
	for (int i = 0; i < numberOfCourses; i++){
		cout << listOfCourses[i].getCourseName() << endl;
	}
}


