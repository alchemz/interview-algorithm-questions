#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int> first;
	deque<int> second;
	deque<int> third;

	first.assign(7,100);
	deque<int>::iterator it;
	it=first.begin()+1;

	second.assign(it, first.end()-1);

	int myints[]={1776, 7, 4};
	third.assign(myints, myints+3);

	cout<<"Size of first: "<<int(first.size())<<"\n";
	cout<<"Size of second: "<<int(second.size())<<"\n";
	cout<<"Size of third: "<<int(third.size())<<"\n";
    
    for(it=first.begin(); it!=first.end(); ++it){
        cout<<" "<<*it;
    }
    cout<<"\n";
    for(it=second.begin(); it!=second.end(); ++it){
        cout<<" "<<*it;
    }
    cout<<"\n";
    for(it=third.begin(); it!=third.end(); ++it){
        cout<<" "<<*it;
    }
        
	return 0;
}