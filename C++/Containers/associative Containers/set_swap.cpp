#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
	int myints[]={12, 75, 30, 21, 25};
	set<int> firstSet(myints, myints+3);
	set<int> secondSet(myints+3, myints+5);

	firstSet.swap(secondSet);
	cout<<"firstSet contains: ";
	for(set<int>::iterator it=firstSet.begin(); it != firstSet.end(); it++)
		cout<<" "<<*it;
	cout<<"secondSet contains: ";
	for(set<int>::iterator it=secondSet.begin(); it!=secondSet.end(); it++)
		cout<<" "<<*it;
	return 0;
}