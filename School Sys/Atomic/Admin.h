#ifndef __ADMIN__
#define __ADMIN__
class Admin : public Staff{
	private:
		string department;

	public:
		Admin(string name, float salary, int yearsWorked, string department);
		Admin(string name, float salary, string department);
		Admin();

		string getDepartment(){return department;}
		void setDepartment(string department);

};

#endif