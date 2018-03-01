#include <iostream>
#include <array>
using namespace std;

int main(){
	array<int, 10> myarr;

	for(int i=0; i<10; i++) myarr.at(i)=i+1;

	cout<<"myarray contains: ";
	for(int i=0; i<10; i++)
		cout<<' '<<myarr.at(i);

	array<int, 5> myarray = {2, 16, 77, 34, 50};
	for(auto it = myarray.begin(); it!=myarray.end(); ++it){
		cout<<' '<<*it;
	}

	return 0;
}