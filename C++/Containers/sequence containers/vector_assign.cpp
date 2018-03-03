#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> first;
	vector<int> second;
	vector<int> third;

	first.assign(7,100); //7 ints with value 100

	vector<int>::iterator it;
	it = first.begin()+1;

	second.assign(it, first.end()-1);//the 5 central values of first

	int myints[]={1776, 7, 4};
	third.assign(myints, myints+3);//assigning from array
	cout<<"Size of first: "<<int (first.size())<<"\n";
	for(it=first.begin(); it!=first.end(); ++it){
		cout<<*it<<endl;
	}
	cout<<"Size of second: "<<int(second.size())<<"\n";
	cout<<"Size of third: "<<int(third.size())<<"\n";
	for(it=third.begin(); it!=third.end(); ++it){
		cout<<*it<<endl;
	}
	return 0;
}