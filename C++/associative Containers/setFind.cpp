#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<string> setOfString;
	setOfString.insert("first");
	setOfString.insert("second");
	setOfString.insert("thirds");
	setOfString.insert("first");

	set<string>::iterator it = setOfString.find("second");
	if(it !=setOfString.end())
		cout<<"'second' found"<<endl;
	else
		cout<<"'second' not found"<<endl;

	it = setOfString.find("fourth");
	if(it != setOfString.end())
		cout<<"4 found"<<endl;
	else
		cout<<"4 not found"<<endl;

	return 0;
}