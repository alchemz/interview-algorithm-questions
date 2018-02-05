//for loop
// program to cross range of 'char'
include <iostream>
using namespace std;

int main(){
	//the last output will be 128
	for(char a = 0; a <=255; a++)
		cout << a;

	//this will be a infinite loop, because b value ranges from 0 to 1
	boo b = true;
	for(b =0; b <=6; b++)
		cout <<b;
	return 0;
}