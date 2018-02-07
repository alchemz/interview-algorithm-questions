//sstream
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	string stringLength;
	float inches = 0;
	float yardage = 0;

	cout <<"Enter number of inches: ";
	getline(cin, stringLength);
	//use stringstream convery string to float variable.
	stringstream(stringLength)>>inches;
	cout<<"You entered" <<inches <<"\n";
	yardage = inches/36;
	cout<<"Yardage is "<<yardage;

	string room_length, room_width;
    float length, width;
    cout<<"What is the length of a room?:";
    getline(cin, room_length);
    stringstream(room_length) >> length;
    cout<<"what is the width of a room?:";
    getline(cin, room_width);
    stringstream(room_width)>>width;
    cout<<"The area of the room is: "<<length*width<<endl;
    
    return 0;
	return 0;
}