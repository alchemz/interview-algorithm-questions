//exit loop
#include <iostream>
using namespace std;
//break: end the loop, and execute the first statement after the end of loop
//continue: force the next iteration to be executed.and skip the current loop
int main()
{
	int a=0;
	while(a<5)
	{
		cout<<"a= "<<a<<"\n";
		a++;
		if(a==3)
			break;
	}
	cout<<"The first statement after the first while loop\n\n";

	while(a<15)
	{
		a++;
		if(a==10)
		{
			cout<<"\t When a=10, go back to the top of the loop";
			cout<<"\n\t This means a=10 is skipped.\n";
			continue;
		}
		cout<<"After continue a= "<<a <<"\n";
	}
	return 0;
}