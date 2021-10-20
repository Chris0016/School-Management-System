//#include "../Managers/Teacher_Manager.cpp"
//#include "../Ref.cpp"
//*
int main(){
	Course course1("Math", "Math");
	Course course2("Computers", "Tech");

	Teacher teacher1("Teacher1", 15.5, 4, "Math", course1);
	Teacher teacher2("Teacher2", 15.5, 4, "Art", course2);
	Teacher teacher3("Teacher3", 15.5, 4, "Technology", course2);
	Teacher teacher4("Teacher4",  15.5, 4,  "History", course2);
	Teacher teacher5("Teacher5",  15.5, 4,  "Science", course2);
	Teacher teacher6("Teacher6",  15.5, 4,  "History", course2);
	Teacher teacher7("Teacher7",  15.5, 4,  "Science", course2);
	Teacher teacher8("Teacher8",  15.5, 4,  "History", course2);

	Teacher teacher9("Teacher9",  15.5, 4,  "History", course2);
	Teacher teacher10("Teacher10",  15.5, 4,  "History", course2);

	Teacher_Manager TM;

	TM.addTeacher(teacher1);
	TM.addTeacher(teacher2);
	TM.addTeacher(teacher3);
	TM.addTeacher(teacher4);
	TM.addTeacher(teacher5);

	TM.addTeacher(teacher6);
	TM.addTeacher(teacher7);
	TM.addTeacher(teacher8);

	TM.printTeachers();


	cout << "\nAdding teacher(list is at max)\n" << endl;
	TM.addTeacher(teacher9);

	TM.printTeachers();

	cout << "\nRemoving teacher:teacher 1\n" << endl;
	TM.removeTeacher(teacher1.getID());

	TM.printTeachers();

	return 0;
}
//*/