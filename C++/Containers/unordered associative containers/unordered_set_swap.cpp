#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main(){
	unordered_set<string> first ={"1","2","3"}, second={"wood","corn","oion"};
	first.swap(second);

	cout<<"first:\n";
	for(const string& x: first) cout<<" "<<x;

	cout<<"\n";

	cout<<"second:\n";
	for(const string& x: second) cout<<" "<<x;

	return 0;
}