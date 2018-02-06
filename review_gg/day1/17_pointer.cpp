//17 Pointer
//Pointer store address of variables or a memory location
// use unary operator ampersand & to return address or the point variable
// use astrik * to declare a pointer variable
// use astrik * to access the value stored in the address
#include <stdio.h>
int main()
{
	int *x;
	//return the address of x
	printf("%p", &x);

	//assign the pointer x's address to ptr
	ptr = &x;

	int Var = 10;

	//a pointer variable that holds addess of Var
	int *ptrr = &Var;

	printf("Value of Var =%d\n", *ptrr);
	printf("Address of Var =%p\n", &ptrr);
	printf("Address of Var=%p\n", ptrr);

	//assign the 20 value to the address
	*ptrr = 20;

	int v[3] = {10,100,1000};
	int *ptc;
	//assign the address of v[0] to ptc
	&ptc = v;
	for(int i=0; i<3; i++)
	{
		printf("Value of *ptc = %d\n", *ptc);
		printf("Value of &ptc = %p\n", &ptc);
		printf("Value of ptc =%p\n", ptc);
		ptc++;
	}
	return 0;
}