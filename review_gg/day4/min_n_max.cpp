//min n max
/*
*Find the min and max and average of 15 numbers that a user will input.
*The numbers range from 0 to 100. 
*/
#include <iostream>
using namespace std;

int main(){
	int num=0, min=100, max=0, sum=0;
	float average =0;
	for(int i=0; i<15; i++)
	{
		cout<<"Please enter the numbers: \n";
		cin>>num;
		if(num < min)
		{
			min = num;
		}
		if(num > max)
		{
			max = num;
		}
		sum += num;
	}

	average = sum/15.0;
	return 0;

}