#include "../Ref.cpp"
#include "../ManagerReference.cpp"
#include <iostream> 

using namespace std;

string LODpts[] = { "Math", "Science", "Technology", "Biology" }; //Fix Me
int numOfDpts = 4;

//A Class to create random valued Schools

class School{ 
        public:
        
            const int MAX_SALARY = 30;
            const int MAX_AGE = 70;
        
            int getRand(int max);

            Teacher_Manager createTeachers(int numTS, string LODpts[], Course_Manager CM);
            Student_Manager createStudents(int numS, int maxAge, int maxGrade);
            Admin_Manager createAdmins(int numAS, string LODPts[]);
            Club_Manager createClubs(int numCLS, Teacher_Manager TM);
            Course_Manager createCourses(int numCS, string LODpts[]);
            LunchStaff_Manager  createLunchStaff(int numLS);         

            Teacher_Manager TM ; 
            Admin_Manager AM ;
            Club_Manager CLM ; 
            Course_Manager CM ; 
            LunchStaff_Manager LM ;
            Student_Manager SM ; 
             //,OR addStudents(int numberOfStudents)

            School(int maxAge, int maxGrade, int numTeachers, int numStudents, int numAdmins, int numCourses, int numLunchStaff, int numClubs);
            School(int maxAge, int maxGrade, int numTeachers, int numStudents, int numAdmins, int numCourses, int numLunchStaff);

            void printAll();
};
