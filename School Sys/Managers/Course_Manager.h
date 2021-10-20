//#include "../Ref.cpp" For testing only

using namespace std;

#ifndef __COURSE_MANAGER__
#define __COURSE_MANAGER__

class Course_Manager{
	private:
		static const int MAX_COURSE_AMOUNT = 10;
		Course listOfCourses[MAX_COURSE_AMOUNT];
		int numberOfCourses = 0;


	public:
		Course_Manager();

		void removeFromList(int idx);
		void printCourses();

		int findCourse(string courseName);
		int addCourse(Course courseIn);
		int removeCourse(string courseName);

		Course getCourse(string courseName);
		int getNumberOfCourses();

		bool courseExist(Course inputCourse);
		bool courseExist_byName(string courseName);
};

#endif