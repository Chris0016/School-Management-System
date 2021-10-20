
#ifndef __TEACHER__
#define __TEACHER__
class Teacher: public Staff{
	private:
		Course classTeaching;
		string department;
	public:
		Teacher(string name, float salary, int yearsWorked, string department, Course classTeaching);
		Teacher(string name, float salary, string department, Course classTeaching);
		Teacher();

		Course getClassTeaching(){return classTeaching;}
		string getDepartment(){return department;}

		void setDepartment(string department);
		void setClassTeaching(Course classTeaching);

};

#endif