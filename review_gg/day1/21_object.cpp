//21 object
//class is a blueprint of data and functions or methods

class person
{
	char name[20];
	int id;
public:
	void getdetails(){}
};

int main()
{
	person p1;//p1 is a object
}

class class_name
{
private:
	//data members and member functions declarations, by default, class variables are private
public:
	//data members and member functions declarations
protected:
}

//encapsulation: wrap data and functions into single unit
//data abstraction: refers to providing only needed information to the outside world and hiding implementation details
//inheritance: is the process by which objects of one class acquire the properties of objects of another class
//polymorphism: an operation may exhibit different behaviors in different instances. operator overloading and function overloading
//dynamic binding: the code to be executed in response to function call is decided at runtime.
//message passing:objects communicate with one another by seding and receiving  information to each other