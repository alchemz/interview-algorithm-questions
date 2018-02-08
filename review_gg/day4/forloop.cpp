#include <iostream>
using namespace std;

int main()
{
	float mean, num, sum;
	for(int i=0; i<5; i++){
		cout<<"Please enter a number: "<<endl;
		cin >> num;
		sum += num;
	}
	mean = sum/5;
	cout<<"The sum is "<<sum<<"\n"<<"The average is: "<<mean<<"\n";

	return 0;
}