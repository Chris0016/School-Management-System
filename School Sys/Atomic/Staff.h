#include <string>
#include <iostream>

using namespace std;

#ifndef __STAFF__
#define __STAFF__

//This is the definition of a Staff inherited by LunchPerson, Admin, and Teacher
enum accessLevels {Top, Administrator, Worker};

class Staff {
	
	private:
		string name;
		float salary;
		int yearsWorked;
		enum accessLevels accessLevel = Worker;
		static int numberOfStaff;
		int id;
		void setID();

	public:
		Staff(string,  float, int);
		Staff(string,  float);
		Staff();

		string getName(){return name;}
		enum accessLevels getAccessLevel(){return accessLevel;}
		float getSalary(){return salary;}
		int getYearsWorked(){return yearsWorked;}
		int getID(){return id;}
		
		void setName(string);
		void setSalary(float);
		void setYearsWorked(int);
		void setAccessLevel(accessLevels accessLevel);
		
		
		static int getNumberOfStaff(){return numberOfStaff;}


};

#endif




