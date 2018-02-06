//19 reference
//when a variable is declared as reference, it becomes a alternative name for an existing variable
#include <iostream>
using namespace std;

int main(){
	int x=10;
	int& ref = x;

	//value of x changed to 20
	ref = 20;
	cout<<"x="<<x<<endl;

	//value of x changed to 30
	x = 30
	cout<<"ref="<<ref<<endl;
	return 0;
}