// input stream: from device to memory
// output stream: from main memory to device(display screen)
/*
* iostream: stands for standard input output strea, contains definition to objects like cin, cout
* iomanip: stands for input output manipulators, contains setw, setprecision
* fstream: mainly describes the file stream, handle the data being read from a file as input or wirtten to file as output
* cout: standard output stream(cout)
* cin: standard input stream
* cerr: un-buffered standard error stream, output the errors, no buffers to store error message
* clog: buffered standard error stream
*/

#include<iostream>
using namespace std;

int main(){
	char sample[] = "Study at home";
	cout << sample << "with a laptop"

	int age;
	cout << "Enter your age";
	cin >> age;
	cout >> "\nYour age is: " << age;

	cerr << "An error occured";
	return 0;
}