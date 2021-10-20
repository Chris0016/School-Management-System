//#include "../Ref.cpp"

using namespace std;

#ifndef __LUNCHSTAFF_MANAGER__
#define __LUNCHSTAFF_MANAGER__
class LunchStaff_Manager{
	
	private:
		//LunchPerson lunchStaff[];

		//C++ indicates that a const must be initialized when declared.
		//Unmodification takes priority over being able to pass a required arguement 
		//Therefore the value is hardcoded. 
		static const int MAX_LUNCH_STAFF = 40;
		LunchPerson listOfLunchStaff[MAX_LUNCH_STAFF];
		 

		int numLunchStaff = 0;

	public:		
		LunchStaff_Manager();//MaxLunchStaff Cannot be changed
		

		void removeFromList(int index);
		void printLunchStaff();

		static int getMaxLunchStaff(){return MAX_LUNCH_STAFF;}
		int getNumLunchStaff(){return numLunchStaff;}
 		
 		int addLunchStaff(LunchPerson lunchStaff);
		int dropLunchStaff(int id);

		bool lunchStaffExist(LunchPerson possibleLunchStaff);

};

#endif