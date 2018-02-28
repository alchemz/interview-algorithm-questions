#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
	set<string> setOfString;
	setOfString.insert("first");
	setOfString.insert("second");
	setOfString.insert("third");
	setOfString.insert("first"); //set only contain unique elements

	cout<<"Set size="<<setOfString.size();

	for(set<string>::iterator it=setOfString.begin(); it!=setOfString.end(); it++){
		cout<<' '<<*it<<endl;
	}
	return 0;
}