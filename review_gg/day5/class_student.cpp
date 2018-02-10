//class_student.cpp
class Student
{
	//members
	string name;
	it id;
	int gradDate;
public: 
	void setName(string nameIn);
	void setID(int idIn);
	void setGradDate(int dateIn);
	string getName();
	int getID();
	int getGradDate();
	void print();
};

void Student::setName(string nameIn)
{
	name = nameIn;
}
void Student::setID(int idIn)
{
	id = idIn;
}
void Student::setGradDate(int gradDateIn)
{
	gradDate = gradeDateIn;
}
void print()
{
	cout<<name<<" "<<id<<" "<<gradDate;
}

string Student::getName()
{
	return name;
}
int Student::getID()
{
	return id;
}
int Student::getGradDate()
{
	return gradDate;
}

int main()
{
	int integer1;
	float float1;
	Student student1;

	integer1 = 4;
	float1 = 4.333;

	student1.setName("Lily Zhang");
	student1.setID(9543217606);
	student1.setGradDate(2017);

	cout<<"integer1 ="<<integer1<<"\n";
	cout<<"float1 ="<<float1<<"\n";

	//print out the data
	cout<<"Using the student::print function\n";
	cout<<"Student1 = ";
	student1.print();
	cout<<"\n\n";

	//access the data
	cout<<"Using the student access functions\n";
	cout<<"Student1 name="<<student1.getName()<<"\n";
	cout<<"Student1 ID="<<student1.getID()<<"\n";
	cout<<"Student1 Grad Date="<<student1.getGradDate()<<"\n";

	return 0;
}