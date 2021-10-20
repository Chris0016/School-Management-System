//#include "../Ref.cpp"

using namespace std;
#ifndef __ADMN_MANAGER__
#define __ADMN_MANAGER__

class Admin_Manager{
	private:
		static const int MAX_ADMIN_AMOUNT = 10;
		Admin listOfAdmins[MAX_ADMIN_AMOUNT];
		int numberOfAdmins = 0;


	public:
		Admin_Manager();

		void removeFromList(int idx);
		void printAdmins();

		int findAdmin(int adminID);
		int addAdmin(Admin adminIn);
		int removeAdmin(int adminID);

		Admin getAdmin(int adminID);
		Admin getAdmin(string adminName);

		int getNumberOfAdmins();

		bool adminExist(Admin inputAdmin);
		bool adminExist_byID(int adminID);
};

#endif