#include <iostream>
#include <string>

using namespace std;

int main()
{
	int * pointerI;
	int number;
	char character;
	char * pointerC;
	string sentence;
	string *pointerS;

	pointerI = &number;
	*pointerI = 45;

	pointerC = &character;
	*pointerC = 'f';

	pointerS = &sentence;
	*pointerS = "Hey look at me, I know pointers";

	cout<<"number= "<<num<<"\n";
	cout<<"character= "<<character<<"\n";
	cout<<"sentence= "<<sentence<<"\n";

	return 0;
}