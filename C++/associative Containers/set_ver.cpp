#include<iostream>
#include<set>
using namespace std;

set<int> setOfNum;

void checkAndInsert(int num){
	if(setOfNum.insert(num).second) //not inserted, return as false
		cout<<"Number "<<num<<" inserted successfully"<<endl;
	else
		cout<<"Number"<<num<<" was already present\n";
}

int main(){
	checkAndInsert(2);
	checkAndInsert(1);
	checkAndInsert(8);
	checkAndInsert(1);

	cout<<setOfNum.size()<<endl;
	for(set<int>::iterator it= setOfNum.begin(); it != setOfNum.end(); it++){
		cout<<" "<<*it;
	}

	return 0;
}