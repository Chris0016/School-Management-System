#ifndef __CLUB__
#define __CLUB__

class Club{
	private:
		string clubName;
		string qoute;
		Teacher clubAdvisor;

	public:
		Club(string name, string qoute, Teacher clubAdvisor);
		Club();

		string getClubName(){return clubName;}
		string getClubQoute(){return qoute;}
		Teacher getClubAdvisor(){return clubAdvisor;}

		void setCLubName(string clubName);
		void setClubQoute(string qoute);
		void setClubAdvisor(Teacher clubAdvisor);

};

#endif