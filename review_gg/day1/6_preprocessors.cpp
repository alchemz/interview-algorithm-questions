// source code -> processed by processor -> program(expanded source code file) generated 
//-> compiled by compiler -> program.obj generated(object code file) -> 
//linker links the object code to library functions -> executable file program.exe generated

/*
* Macros: #define LIMIT 5, #define AREA(l, b) (l*b)
* File Inclusion : #include<file_name>/standard files or header files, #include"file_name"/user defined
* Conditional Compilation: ifdef, endif
* Other directives: #undef LIMIT, #pragma exit, #pragma warn
*/

#include<iostream>
//macro with parameter
#define AREA(l,b) (l*b)
int main()
{
	int l1=10, l2=5, area;
	area = AREA(l1, l2);
	std::cout<<"Area of rectange is: "<<area;
	return 0;
}