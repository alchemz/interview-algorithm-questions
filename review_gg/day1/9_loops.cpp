//Loops
/*
* Entry Controlled loops:  For loop and While loop
* Exit Controlled Loops: do-while loop
*/

#include<iostream>
using namespace std;

int main(){
	for(int i=0; i<10; i++){
		cout<<"hello world\n";
	}

	int j =0;
	while (j <10){
		cout<<"hello world while\n";
		j++;
	}

	int k =0;
	do{

		cout <<"hello world do\n";
		k++;

	}while(k<10);
	return 0;
}