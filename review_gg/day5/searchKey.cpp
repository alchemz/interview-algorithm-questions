//searchArray.cpp
#include <iostream>
using namespace std;

int main()
{
	const int size = 4;
	int array[]={345, 75896, 2, 543};
	int searchKey=543;
	cout<<"Found at: "<<searchArray(array, size, searchKey);
	return 0;
}

int searchArray(int *array, int size, int searchKey)
{
	int location;
	for(int i=0; i<size; i++)
	{
		if(searchKey==array[i])
		{
			location=i;
		}
		else
			location=-1;
	}

	return location;
}