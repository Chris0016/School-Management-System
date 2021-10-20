#include <string>

using namespace std;

#ifndef __COURSE__
#define __COURSE__

class Course {
	private:
		string name;
		string department;
	public:
		Course(string name, string department);
		Course();

		string getCourseName(){return name;}
		string getDepartment(){return department;}

		void setName(string name);
		void setDepartment(string department);	
};

#endif