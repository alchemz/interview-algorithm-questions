#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int userInput = 0;
	int maxNumber = 0;
	int minNumber = 100;
	int sumTotal = 0;
	float average = 0;

	//get the numbers from the user
	for(int i=0; i<15; i++)
	{
		cout<<"Enter a number: ";
		scanf("%d", &userInput);
		cout<<userInput<<endl;
		if(userInput>maxNumber)
		{
			maxNumber = userInput;
		}
		if(userInput<minNumber)
		{
			minNumber = userInput;
		}
		sumTotal = sumTotal + userInput;
	}

	cout<<"Maximum number= "<<maxNumber<<"\n";
	couot<<"Minimum number = "<<minNumner<<"\n";
	average = sumTotal/15;
	cout<<"Average = " << average <<"\n";
	return 0;
}

