/** 
 * A school class that ties all the managers together. Also has methods to create random valued classes. 
 * @author Christopher Perz
 * @version 1.0.0 11/12/20
*/
#include "School.h"

School::School(int maxAge, int maxGrade, int numTeachers, int numStudents, int numAdmins, int numCourses, int numLunchStaff, int numClubs){
    
    this->CM =  createCourses( numCourses,  LODpts);
    this->TM = createTeachers( numTeachers, LODpts,  CM);
    this->CLM = createClubs(numClubs, TM);

    this->SM = createStudents( numStudents, maxAge, maxGrade);
    this->AM = createAdmins( numAdmins,  LODpts);
    this->LM =  createLunchStaff(numLunchStaff);
    
}
School::School(int maxAge, int maxGrade, int numTeachers, int numStudents, int numAdmins, int numCourses, int numLunchStaff){

    this->CM =  createCourses( numCourses,  LODpts);
    this->TM = createTeachers( numTeachers, LODpts,  CM);


    this->SM = createStudents( numStudents, maxAge, maxGrade);
    this->AM = createAdmins( numAdmins,  LODpts);
    this->LM =  createLunchStaff(numLunchStaff);

}
/** 
 * Why: Used in multiple functions to generate random values such as salary and age. 
 * @param max The maximum number the function can give.
 * @return integer A random Number <= max
*/

int School::getRand(int max){
    int maxA = max;

    if (max == 0){
        maxA = 70;
    }
    return (rand() % maxA) + 1;
}
/** 
 * Why: Used for testing and represent the values held in the manager neatly.
 * @param none
 * @return void
*/

void School::printAll(){ 
    
    cout << "Printing Admin:\n";
        AM.printAdmins();
    cout << "\n Printing Teachers:\n";
        TM.printTeachers();
    cout << "\n Printing Lunch Staff:\n";
        LM.printLunchStaff();
    cout << "\n Printing Students:\n";
        SM.printStudents();
    cout << "\n Printing Clubs:\n";
        CLM.printClubs();
    cout << "\n Printing Courses:\n";
        CM.printCourses();
        
}
/**
 * Why: To create random values to the student manager and assing it to the class's SM. Primarily used for testing. 
   @param numStudents The number of students to be created.
   @param maxAge  The highest age a student can have.
   @param maxGrade The highest grade a student can be in. 

   @return Student_Manager A student manager with an initialized list of students
*/
Student_Manager School::createStudents(int numStudents, int maxAge, int maxGrade){

    Student_Manager SM;

    for (int i = 0; i < numStudents; i++){
        
        SM.addStudent(Student("Some Student"+to_string(i+1), School::getRand(maxAge), School::getRand(maxGrade) ));
    }
    
    return SM;
}

/**
 * Why: To create create a LunchStaff_Manager with random lunchPerson values and assing it to the class's LSM. Primarily used for testing.
   @param numLS The number of lunch Staff to be created. 
   
   @return LunchStaff_Manager A LunchStaff_Manager with an initialized list of lunch Staff. 
*/
LunchStaff_Manager School::createLunchStaff(int numLS){
    LunchStaff_Manager LSM;

    for (int i = 0; i < numLS; i++){

        LSM.addLunchStaff(LunchPerson ("LunchPerson"+to_string(i+1), (float)School::getRand(MAX_SALARY),"Fruit Salad" ) );
    }

    return LSM;
} 
/**
 * Why: To create create a Course_Manager with random Course values and assing it to the class's CM. Primarily used for testing.
   @param numCS The number of Courses to be created. 
   @param LODpts[] The list of departments available that can be used to instantiate courses.
   
   @return Course_Manager A Course_Manager with an initialized list of Courses. 
*/
Course_Manager School::createCourses(int numCS, string LODpts[]){
   
    Course_Manager CM;
    for (int i = 0; i < numCS; i++){

        CM.addCourse(Course("Course"+to_string(i+1), LODpts[i % (numOfDpts-1)] ));
    }
    return CM;
}
/**
 * Why: To create create a Admin_Manager with random Admin values and assing it to the class's A<. Primarily used for testing.
   @param numAS The number of Admins to be created. 
   @param LODpts[] The list of departments available that can be used to instantiate Admins.
   
   @return Admin_Manager A Admin_Manager with an initialized list of  Admins. 
*/
Admin_Manager School::createAdmins(int numAS, string LODpts[]){

    Admin_Manager AM;

    for (int i = 0; i < numAS; i++){
            AM.addAdmin( Admin("Admin"+to_string(i+1), (float)School::getRand(MAX_SALARY), LODpts[i % (numOfDpts-1) ]  ));
    }

    return AM;
}
/**
 * Why: To create create a Club_Manager with random Club values and assing it to the class's CLM. Primarily used for testing.
   @param numCLS The number of Clubs to be created. 
   @param TM The Teacher_Manager that can be used to instantiate Admins.
   
   
   @return Club_Manager A Club_Manager with an initialized list of Club. 
*/
Club_Manager School::createClubs(int numCLS, Teacher_Manager TM){
    //Max number of clubs is 10

    int numT = TM.getNumberOfTeachers();
    Teacher LOTeachers[numT];

    for (int i = 0; i< numT; i++){
       LOTeachers[i] = TM.getTeacherByIdx(i); 
    }
                    
    Club_Manager CM;
    
    for (int i = 0; i < numCLS; i++){
        CM.addClub( Club("clubName"+ to_string(i+1), "", LOTeachers[i %(TM.getNumberOfTeachers()-1)]) ); 
    }
    
    return CM;
}
/**
 * Why: To create create a Teacher_Manager with random Teacher values and assing it to the class's TM. Primarily used for testing.
   @param numCLS The number of Teachers to be created. 
   @param TM The Teacher_Manager that can be used to instantiate Admins.
   
   
   @return Teacher_Manager A Teacher_Manager with an initialized list of Teacher. 
*/
Teacher_Manager School::createTeachers(int numTS, string LODpts[], Course_Manager CM ){  
    //Teacher_Manager createTeachers(Course LOCourses[]){ 
    auto c1 = CM.getCourse("Coursename1");

    Teacher_Manager TM;    
    for (int i = 0; i < numTS; i++ ){
        
        TM.addTeacher( Teacher( "Name"+to_string(i+1), (float)School::getRand(MAX_SALARY), LODpts[i % (numOfDpts - 1)], c1));
    }
    
  

	return TM;
}

int main(){
    
    School school1(3, 3, 3,3, 3, 3, 3, 3);
    school1.printAll();
    
    return 0;
}

