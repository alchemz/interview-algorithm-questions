//while guess
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int target = 55;
	string userString;
	int guess = -1;

	while(guess != target)
	{
		cout<<"Guess a number between 0 and 100: ";
		cin>>guess;
		cout<<guess<<"\n";
		getline(cin, userString);
		stringStream(userString)>>guess;
		if(guess > target)
			cout<<"Your guess is too high\n";
		else if(guess < target)
			cout<<"Your guess is too low\n";
		else 
			cout<<"Your guess is right! \n";

		if(userString == "q" || guess=='-1')
		{
			cout<<"good bye";
			break;
		}
	}

	return 0;
}