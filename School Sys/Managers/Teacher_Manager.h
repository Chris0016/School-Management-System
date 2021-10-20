//#include "../Atomic/Teacher.cpp"

#ifndef __TEACHER__MANAGER__
#define __TEACHER__MANAGER__

class Teacher_Manager{
	private:
		static const int MAX_TEACHER_AMOUNT = 8;
		Teacher listOfTeachers[MAX_TEACHER_AMOUNT];
		int numberOfTeachers = 0;


	public:
		Teacher_Manager();

		void removeFromList(int idx);
		void printTeachers();

		int findTeacher(int teacherID);
		int addTeacher(Teacher teacherIn);
		int removeTeacher(int teacherID);

		Teacher getTeacher(int teacherID);
		Teacher getTeacherByIdx(int idx);
		

		int getNumberOfTeachers();

		bool teacherExist(Teacher inputTeacher);
		bool teacherExist_byID(int teacherID);
};

#endif
