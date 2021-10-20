//#include "../Ref.cpp"

using namespace std;

#ifndef __CLUB_MANAGER__
#define __CLUB_MANAGER__

class Club_Manager{
	private:
		static const int MAX_CLUB_AMOUNT = 10;
		Club listOfClubs[MAX_CLUB_AMOUNT];
		int numberOfClubs = 0;


	public:
		Club_Manager();

		void removeFromList(int idx);
		void printClubs();

		int findClub(string clubName);
		int addClub(Club clubIn);
		int removeClub(string clubName);

		Club getClub(string clubName);
		int getNumberOfClubs();

		bool clubExist(Club inputClub);
		bool clubExist_byName(string clubName);
};

#endif