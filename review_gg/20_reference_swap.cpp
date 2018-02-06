//20 reference swap
#include <iostream>
using namespace std;
void swap(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

int main()
{
	int a =2, b=3;
	swap(a, b);
	cout<<a<<" "<<b;
	return 0;
}

/*
Difference between pointers and references:
1. a pointer can never be declared as void, but reference can
2. references are less powerful than pointers, once references are created, it cant be later made to
refer another object.
3. references cant be NULL, but pointer can
4. reference mush be initialized when declare, but no restrictions with pointers.
*/