#include "Club.h"


Club::Club(string clubName, string qoute, Teacher clubAdvisor){
			this->clubName = clubName;
			this->qoute = qoute;
			this->clubAdvisor = clubAdvisor;
}
Club::Club(){}

void Club::setCLubName(string clubName){this->clubName = clubName;}
void Club::setClubQoute(string qoute){this->qoute = qoute;}
void Club::setClubAdvisor(Teacher clubAdvisor){this->clubAdvisor = clubAdvisor;}


