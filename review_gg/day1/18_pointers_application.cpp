//18 pointers application
#include <bits/stdc++.h>
using namespace std;

void geeks()
{
	int val[3] = {5,10,20};
	int *ptr;

	ptr= &val;
	cout << "Elements of the array are: ";
	cout <<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2];
	return 0;
}

int main()
{
	geeks();
	return 0;
}