//#include "../Managers/Club_Manager.cpp"
//#include "../Ref.cpp"

int main()
{
	Course course1("Calculus", "Math");
	Course course2("Design", "Art");

	Teacher advisor1("Mickey", 15.5, 4, "Math", course1);
	Teacher advisor2("Robert", 15.5, 4, "Art", course2);


	Club club1("Club1", "", advisor2);
	Club club2("Club2", "", advisor1);
	Club club3("Club3", "", advisor1);
	Club club4("Club4", "", advisor2);
	Club club5("Club5", "", advisor1);

	Club club6("Club6", "", advisor1);
	Club club7("Club7", "", advisor1);
	Club club8("Club8", "", advisor1);
	Club club9("Club9", "", advisor1);
	Club club10("Club10", "", advisor1);

	Club club11("Club11", "", advisor1);
	Club club12("Club12", "", advisor1);
		
	Club_Manager CM;

	cout << "\nNumber of Clubs: " << CM.getNumberOfClubs() << "\n";
	cout << "Adding 6 Clubs\n\n";

	CM.addClub(club1);CM.addClub(club2);CM.addClub(club3);
	CM.addClub(club4);CM.addClub(club5);CM.addClub(club6);
	CM.addClub(club7);CM.addClub(club8);CM.addClub(club9);
	CM.addClub(club10);

	CM.printClubs();

	cout << "\nNumber of Clubs: " << CM.getNumberOfClubs() << endl;
	cout << "Adding 1 More Club(After max)\n\n";
	
	CM.addClub(club11);

	
	CM.printClubs();

	cout << "Removing Club: club1\n"<< endl;
	CM.removeClub("Club1");

	CM.printClubs();

	/*
	cout << "\n Removing Club: Arts and Crafts \n";

	CM.removeClub("Arts and Crafts");

	CM.printClubs();
	cout << "\nNumber of Clubs: " << CM.getNumberOfClubs() << "\n";

	cout <<  "\nAdding Club: Arts and Crafts \n";
	CM.addClub(art);

	CM.printClubs();
	cout << "\nNumber of Clubs: " << CM.getNumberOfClubs() << "\n";
	*/




	return 0;
}
