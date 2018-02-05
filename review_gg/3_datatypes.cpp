//primitive data types
/*
* Integer: 4 bytes, ranges from -2147483648 to 2147483647.
* Character: 1 byte of memory, ranges from -128 to 127 or 0 to 255
* Boolean: is used for storing boolean or logical values
* Floating point: 4 bytes of memory, for storing single precision floating point value
* Double floating point: 8 byte of memory space
* Void: without any value
* Wide Character: 2 or 4 bytes long
*/

//datatype modifiers
/*
* Considering GCC 64 bit
* Signed:
* Unsigned:
* Short:
* Long:
* char: 1
* short int: 2 bytes, ranges from -32767 to 23767
* unsigned short int: 2 byte, ranges from 0 to 65535
* unsigned int, int: 4 bytes
* long int, unsigned long int: 4 bytes
* long long int, unsigned long long int: 8 bytes
* signed char, unsigned char: 1 byte
* float:4
* double: 8
* long double: 12
* wchar_t: 2 or 4
*/

#include<iostream>
using namespace std;
int main(){
	cout <<"Size of char: " << sizeof(char) << "bytes" << endl;
	cout <<"Size of int: " << sizeof(int) << "bytes" << endl;
	cout << "Size of short int" << sizeof(short int) << "bytes" << endl;
	cout << "Size of long int " << sizeof(long int) << "bytes" <<endl;
	cout << "Size of signed long int" << sizeof(signed long int) <<"bytes" << endl;
	cout << "Size of unsigned long int" << sizeof(unsigned long int) << "bytes" <<endl;
	cout << "Size of float" << sizeof(float) << "bytes" << endl;
	cout << "Size of double " << sizeof(double) << "bytes" << endl;
	cout << "Size of wchar_t" << sizeof(wchar_t) << "bytes" << endl;
	return 0;