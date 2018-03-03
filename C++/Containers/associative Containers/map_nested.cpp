//Program to create multi level map in C++
#include <iostream>
#include <map> // header file needed for to use MAP STL

using namespace std;

int main(void)
{ 
//Define multilevel map. map within a map. 
map<int, map<int,char> > myMap;
myMap[1][1] = 'A';
myMap[1][2] = 'B';
myMap[2][1] = 'C';
myMap[2][2] = 'D';

cout << "[1][1] = " << myMap[1][1] << endl;
cout << "[1][2] = " << myMap[1][2] << endl;
cout << "[2][1] = " << myMap[2][1] << endl;
cout << "[2][2] = " << myMap[2][2] << endl;

return 0;
}

//https://kailaspatil.blogspot.com/2010/11/multilevel-map-in-c.html