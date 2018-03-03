#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
	set<string> setOfStrings;
	setOfStrings.insert("first");
	setOfStrings.insert("second");
	setOfStrings.insert("third");
	setOfStrings.insert("fourth");

	setOfStrings.erase("third");

	for(set<string>::iterator it=setOfStrings.begin(); it != setOfStrings.end(); it++){
		cout<<" "<<*it;
	}
	return 0;
}