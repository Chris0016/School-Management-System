

#ifndef __LUNCHPERSON__
#define __LUNCHPERSON__
class LunchPerson: public Staff{
	private:
		string speacialtyDish;

	public:
		LunchPerson(string name, float salary, int yearsWorked, string speacialtyDish);
		LunchPerson(string name, float salary, string speacialtyDish);
		LunchPerson();
		
		//Double check this
		string getSpecialtyDish(){ return speacialtyDish;}
		
	void setSpeacialtyDish(string speacialtyDish);

};

#endif