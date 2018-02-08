#include <iostream>
using namespace std;

int main()
{
	int Target = 33;
	int guess;
	cout<<"Guess a number between 0-100\n";
	cin>>guess;

	cout<<"You guessed: "<<guess<<"\n"
	if（guess < Target>
	{
		cout<<"Your guess is too low.\n";
	}
	else if(guess > Target)
	{
		cout<<"Your guess is too high.\n";
	}
	else
	{
		cout<<"Yay! You guessed correctly.\n";
	}

	return 0;
}