

//main.h 

class Student
{
    
    int studentID;
    int grades[10];
public:
	void setStudentID(int inID);
	void setGrade(int gradeNumber, int gradeIn);
	int getStudentID();
	int * getGrades();
	int getGrade(int gradeNumber);
	void printGrades();
	int sortGrades();
	int getMin();
	int getMax();
	float getAverageGrade();
};

//********************
class CourseEnrollment
{
    public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
    void addStudents(Student* studentIn);
	int * getAllGrades();
    int * sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade(); 
    void printAllGrades();
};
