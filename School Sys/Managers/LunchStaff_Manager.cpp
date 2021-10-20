/**
	CourseNum Assgn num: Holds a list of Lunch Staff and keeps track of useful info
	@file LunchStaff_Manager.cpp
	@author Christopher Perz
	@version 1.0.0 11/6/20
*/

#include "LunchStaff_Manager.h"

/**
	Void
	@param none
	@return none
*/
LunchStaff_Manager::LunchStaff_Manager(){}

/**
	Adds a lunchperson to the list of lunchstaff, increases the current number of lunch staff.
	@param lunchStaff The lunchperson obj to be added.
	@return none
*/
int LunchStaff_Manager::addLunchStaff(LunchPerson lunchStaff){
	
	if (LunchStaff_Manager::lunchStaffExist(lunchStaff) || numLunchStaff + 1 == MAX_LUNCH_STAFF) {  return 1;}
	listOfLunchStaff[numLunchStaff++] = lunchStaff;
	
	
	return 0;	
}



//bool matches_id (const LunchPerson& value) { return (value.getID() = id;) }
//TRIPLE CHECK MEMORY LEAKS HERE 

/**
	Finds and deletes Lunch Staff from list.
	@param  id The id of the lunchperson.
	@return 0 for success and 1 for failure(no matching id).
*/
int LunchStaff_Manager::dropLunchStaff(int id){
	for (int i = 0; i < numLunchStaff; i++){
		if (listOfLunchStaff[i].getID() == id){
			removeFromList(i);
			numLunchStaff--;

			return 0;
		}
	}
	return 1;
}

/**
	Removes a lunchperson by reshifting list and reduces the number of lunch staff.
	@param index The index of the lunchstaff to be removed.
	@return none
*/
//Delete element and Reshift list 
void LunchStaff_Manager::removeFromList(int index){
	if(index >= numLunchStaff || index < 0) return;

	if (index != MAX_LUNCH_STAFF-1){
		for (int i = index; i < numLunchStaff; i++){
			listOfLunchStaff[i] = listOfLunchStaff[i+1];
			 //listOfLunchStaff[numLunchStaff-1];
		}
	}
}

//TRIPLE CHECK MEMORY LEAKS THERE

/**
	Checks whether a lunch person exists in the list by comparing ID's. 
	@param none
	@return True if ID matches an existing one and false other wise.
*/
bool LunchStaff_Manager::lunchStaffExist(LunchPerson possibleLunchStaff){
	for(int i = 0; i < numLunchStaff; i++){
		if (listOfLunchStaff[i].getID() == possibleLunchStaff.getID() ){
			
			return true;
		}
	}
	
	return false;
}


/**
	Prints the Names of the current staff workers.
	@param none
	@return none
*/
void LunchStaff_Manager::printLunchStaff(){
	
	for (int i = 0; i < numLunchStaff; i++){
		cout<< listOfLunchStaff[i].getName() << "\n" << endl;
	}
}

