//In C++, you don't need to learn arrays, because vectors can be more useful
//reference: https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	//scan the input
	int userInput[40];
	for(int i=0; i<40; i++)
	{
		scanf("%d", &userInput[i]);
	}

	//print the original array
	cout<<"\n The array \n";
	for(int i=0; i<40; i++)
	{
		cout<<userInput[i]<<" ";
	}

	//print the array in reverse order
	cout<<"\n\n The array in the reverse mode\n";
	for(int i=39; i>=0; i--)
	{
		cout<<userInput[i]<<" ";
	}

	//sorting the array in ascending order
	for(int i=0; i<40; i++)
	{
		for(int j=0; j<39-i; j++)
		{
			//compare j and j+1 elements, and swap
			if(userInput[j] > userInput[j+1])
			{
				int temp;
				temp = userInput[j];
				userInput[j] = userInput[j+1];
				userInput[j+1]=temp;
			}
		}
	}
	cout<<"\n\nThe array sorted\n";
	for(int i=0; i<40; i++)
	{
		cout<<userInput[i]<<" ";
	}

	for(int i=0; i<40; i++)
	{
		for(int j=0; j<39-i; j++)
		{
			if(userInput[j] < userInput[j+1])
			{
				int temp;
				temp=userInput[j];
				userInput[j]=userInput[j+1];
				userInput[j+1]=temp;
			}
			
		}
	}

	cout<<"Print the sorted array in descending order\n";
	for(int i=0; i<40; i++)
	{
		cout<<userInput[i]<<" ";
	}
	return 0;
}