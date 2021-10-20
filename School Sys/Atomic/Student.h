#include <string>
using namespace std;

#ifndef __STUDENT__
#define __STUDENT__
class Student{
	private:
		string name;
		int age;
		int grade;
		string favoriteSubject;
		
	public:
		Student(string name, int age, int grade, string favoriteSubject);
		Student(string name, int age, int grade);
		Student();

		string getName(){return name;}
		int getAge(){return age;}
		int getGrade(){return grade;}
		string getFavoriteSubject(){return favoriteSubject;}

		void setName(string name);
		void setAge(int age);
		void setGrade(int grade);
		void setFavoriteSubject(string favSubject);

};

#endif