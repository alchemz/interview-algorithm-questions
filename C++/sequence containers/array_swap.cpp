#include<iostream>
#include<array>
using namespace std;

int main(){
	array<int, 5>first ={1,2,3,4,5};
	array<int, 5>second={11,12,13,14,15};

	first.swap(second);

	cout<<"First swappped:";
	for(int& x: first) cout<<' '<<x;

	cout<<"\nSecond swapped:";
	for(int& x: second) cout<<' '<<x;

	//sizeof return in bytes of object type
	cout<<"\nThe size of first array: "<<sizeof(first)<<endl;
	cout<<"The size of second array: "<<first.size()<<endl;
	return 0;
}