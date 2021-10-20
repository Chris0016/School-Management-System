//#include "../Ref.cpp" //For testing only

#ifndef __STUDENT_MANAGER__
#define __STUDENT_MANAGER__

class Student_Manager{
	private:
		static const int MAX_STUDENT_AMOUNT = 10;
		Student listOfStudents[MAX_STUDENT_AMOUNT];
		int numberOfStudents = 0;


	public:
		Student_Manager();

		void removeFromList(int idx);
		void printStudents();

		int findStudent(string studentName);
		int addStudent(Student studentIn);
		int removeStudent(string studentName);

		Student getStudent(string studentName);
		int getNumberOfStudents();

		bool studentExist(Student inputStudent);
		bool studentExist_byName(string studentName);
};

#endif

