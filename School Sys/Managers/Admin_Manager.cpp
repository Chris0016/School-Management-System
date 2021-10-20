/**
	Adds and removes Admins to the list of clubs and keeps track.
	@file: Admin_Manager.cpp
	@author: Christopher Perez
	@version 1.0.0 11/9/20
*/

#include "Admin_Manager.h"


Admin_Manager::Admin_Manager(){}


/**
	Why: Multi-purpose method used to remove elements, get elements, and check if elements exists. 
	@param teacherName The name of the club to be found.
	@return -1 if club is not found or the index otherwise.
*/
int Admin_Manager::findAdmin(int adminID){
	for (int i = 0; i < numberOfAdmins; i++){
		if (listOfAdmins[i].getID() == adminID ){
			return i;
		}
	}
	return -1;
}

/**
	Why: Used to interpret the results of findAdmin(), making code shorter in other areas. 
	@param teacherName The name of the club
	@return True if the club is found and False if not. 
*/
bool Admin_Manager::adminExist_byID(int adminID){
	return (findAdmin(adminID) >= 0);
}

/**
	Why: Used to check if a club should be added or not and shortens code later by interpreting results and calling getID() function. 
	@param club The club to find.
	@return True if the club is found and False if not. 
*/
bool Admin_Manager::adminExist(Admin inputAdmin){
	return (findAdmin(inputAdmin.getID()) >= 0);
}

/**
	@param teacherName The teacherName of the club to be returned.
	@return The club obj or error if club cannot be found.
*/
Admin Admin_Manager::getAdmin(int adminID){
	int idx = findAdmin(adminID);
	if (idx == -1) throw "Admin does not exist";

	return listOfAdmins[idx];
}

/**
	@param none
	@return number of clubs
*/
int Admin_Manager::getNumberOfAdmins(){
	return numberOfAdmins;
}

/**
	Why: To remove a club given a string. 
	@param teacherName The name of the club to be removed.
	@return 0 if club was successfully removed and 1 otherwise(club was not found).

*/
int Admin_Manager::removeAdmin(int adminID){
	int index = findAdmin(adminID);
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
void  Admin_Manager::removeFromList(int idx){

	if (idx < 0 || idx >= numberOfAdmins  ) return;
		
	if (idx + 1 != MAX_ADMIN_AMOUNT){			//Do not reshift list if the last element is being removed.
		for(int i = idx; i < numberOfAdmins - 1 ; i++){
			listOfAdmins[i] = listOfAdmins[i+1];	
		}
	}
	numberOfAdmins--;
	
}

/** 
	@param teacherIn The club to be added. 
	@return 0 if the club was successfully added to the list of clubs and 1 otherwise. 
*/
int Admin_Manager::addAdmin(Admin  adminIn){
	
	if (numberOfAdmins == MAX_ADMIN_AMOUNT || Admin_Manager::adminExist(adminIn)) return 1;

	listOfAdmins[numberOfAdmins++] = adminIn;

	return 0;
}
/**
	Why: Used for testing and other inexplicit reasons. 
	@param none
	@return none
*/

void Admin_Manager::printAdmins(){
	for (int i = 0; i < numberOfAdmins; i++){
		cout << listOfAdmins[i].getName() << endl;
	}
}