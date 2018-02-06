//13 functions
#include<stdio.h>

//function declaration
int max(int, int);
void fun(int);
//main function does not receive any parameters
int main(void){
	int a =10, b=20;
	int m=max(a,b)
	printf("m is %d", m);

	int c =20;
	fun(&c);
	printf("c=%d", c);
	return 0;
}

void fun(int *ptr){
	*ptr = 30;
}
int max(int x, int y){
	if(x>y)
		return x;
	else
		return y;
}
//actual parameters:10, 20
//formal parameters: x, y
//pass by value: value of actual parameters are copied to function's formal parameters
//pass by reference: both actual and formal parameters refer to same locations