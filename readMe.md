Domain Analysis

In order to save time, create Schools on separate files and load  them to main to run.
Have functions like make teachers, make students etc... . Use for loops and generate some random data to save time when making 
these.  

The Management class will hold important values that will set limits and prevent the creation of things that go over the
set limits. In addition it will keep track of important things.

Each class will have its own add dropp functions, and will keep a list. 
The super class will keep a reference(pointer?) to that list held in the sub class. 
Accessing these lists should be done through the management class

Problems

**							***						***
	If Possible find a better architecture that takes off some load out of the Management class. 
**							***						***

**Create a proccess for changing the max number of staff**

Regulate Departments through enums or have a set list of possible departments?

The project will not have ways to edit properties of staff but the way its designed it can be done. 

Departments is a list of strings

Could've made a static variable to keep track of current number of admin, students,... . That would require making the 

!!!When deleting a student, check all places where a student can exist and delete 
Sub systems

	
 Management(Big Super Class)
	Field Values:
	 Number of Teachers/Max Number of teachers
	 Number of Administrators/Max Num..
	 Number of Students/Max
	 Number of Departments/Max/
	
	ListOfDepartments
	ListOfAdministrators
	ListOfTeachers 
	

 Education
	Classs:
		Field Values:
			Department
		 		Access available departments from management
			Teacher 
				Access available teachers from teachers list. 

	Students:
		Create/Edit Schedules, *Create=add/drop classes, no check system
		
	Departments(class(max num of Dpts) ):
		Field Values:
		 Administrator

		Create/Drop Department
		
	Staff(super class):
		Field Values:
			Salary
			Weekly Hours
			Access Level:*Principal has the highest*
			Name 
			Years Worked
			
		Principal:
		Administrator:
			Department 
			
		Teachers:
			Classes taught
		Lunch Staff
	
 Finance
	Budget
	....	

 Other
	Clubs:
		Create/Drop Club
		Have some info about the club 


	
