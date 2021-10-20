/**
	Adds and removes Clubs to the list of clubs and keeps track.
	@file: Club_Manager.cpp
	@author: Christopher Perez
	@version 1.0.0 11/9/20
*/
#include "Club_Manager.h"

Club_Manager::Club_Manager(){}


/**
	Why: Multi-purpose method used to remove elements, get elements, and check if elements exists. 
	@param clubName The name of the club to be found.
	@return -1 if club is not found or the index otherwise.
*/
int Club_Manager::findClub(string clubName){
	for (int i = 0; i < numberOfClubs; i++){
		if (listOfClubs[i].getClubName() == clubName ){
			return i;
		}
	}
	return -1;
}

/**
	Why: Used to interpret the results of findClub(), making code shorter in other areas. 
	@param clubName The name of the club
	@return True if the club is found and False if not. 
*/
bool Club_Manager::clubExist_byName(string clubName){
	return (findClub(clubName) >= 0);
}

/**
	Why: Used to check if a club should be added or not and shortens code later by interpreting results and calling getName() function. 
	@param club The club to find.
	@return True if the club is found and False if not. 
*/
bool Club_Manager::clubExist(Club inputClub){
	return (findClub(inputClub.getClubName()) >= 0);
}

/**
	@param clubName The clubName of the club to be returned.
	@return The club obj or error if club cannot be found.
*/
Club Club_Manager::getClub(string clubName){
	int idx = findClub(clubName);
	if (idx == -1) throw "Club does not exist";

	return listOfClubs[idx];
}

/**
	@param none
	@return number of clubs
*/
int Club_Manager::getNumberOfClubs(){
	return numberOfClubs;
}

/**
	Why: To remove a club given a string. 
	@param clubName The name of the club to be removed.
	@return 0 if club was successfully removed and 1 otherwise(club was not found).

*/
int Club_Manager::removeClub(string clubName){
	int index = findClub(clubName);
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
void  Club_Manager::removeFromList(int idx){

	if (idx < 0 || idx >= numberOfClubs  ) return;
	
	if (idx + 1  != MAX_CLUB_AMOUNT){			//Do not reshift list if the last element is being removed.
		for(int i = idx; i < numberOfClubs -1; i++){
			listOfClubs[i] = listOfClubs[i+1];
		}
	}
	numberOfClubs--;
}
/** 
	@param clubIn The club to be added. 
	@return 0 if the club was successfully added to the list of clubs and 1 otherwise. 
*/
int Club_Manager::addClub(Club clubIn){
	
	if (numberOfClubs == MAX_CLUB_AMOUNT || Club_Manager::clubExist(clubIn)) return 1;

	listOfClubs[numberOfClubs++] = clubIn;

	return 0;
}
/**
	Why: Used for testing and other inexplicit reasons. 
	@param none
	@return none
*/

void Club_Manager::printClubs(){
	for (int i = 0; i < numberOfClubs; i++){
		cout << listOfClubs[i].getClubName() << endl;
	}
}






