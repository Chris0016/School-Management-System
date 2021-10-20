//#include "../Managers/LunchStaff_Manager.cpp"
//#include "../Ref.cpp"

int main(){
	
	LunchStaff_Manager LSM;

	LunchPerson heron("Person1", 15.1, "");
	LunchPerson hero2("Person2", 15.1, "");
	LunchPerson hero3("Person3", 15.1, "");
	LunchPerson hero4("Person4", 15.1, "");
	LunchPerson hero5("Person5", 15.1, "");

	LSM.addLunchStaff(heron);
	LSM.addLunchStaff(hero2);
	LSM.addLunchStaff(hero3);
	LSM.addLunchStaff(hero4);
	LSM.addLunchStaff(hero5);

	LSM.printList();

	cout << "removing from list: hero3 \n";

	LSM.dropLunchStaff(hero3.getID());

	LSM.printList();

	cout << "adding to list: hero3 \n";
	LSM.addLunchStaff(hero3);

	LSM.printList();

	return 0;
}

//*/

