#include <iostream>
using namespace std;

int main(){
	char menuItem;
	cout<<"Choose your holiday package:\n";
	cout<<"L: luxury packages\nS: standard package\n";
	cout<<"B: basic package";

	cin>>menuItem;
	cout<<menuItem<<"\n";
	cout<<"The "<<menuItem<<" package includes: \n";

	switch(menu)
	{
		case 'L':
		{
			cout<<"\tSpa Day\n";
			cout<<"\tSailboat Tour\n";
		}
		case 'S':
		{
			cout<<"\tCity Tour\n";
			cout<<"\tComplimentary Happy Tour\n";
		}
		case 'B':
		{
			cout<<"\tAirport Transfers\n";
			cout<<"\tComplimentary Breakfast\n";
			break;
		}
		default:
			cout<<"Please select the L, S, B package.\n";
	}

	float in1, in2, result;
    char operation;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>>operation;
    
    switch(operation)
    {
        case '+':
        {
            result = in1 + in2;
            break;
        }
        case '-':
        {
            result = in1 - in2;
            break;
        }
        case '*':
        {
            result = in1 * in2;
            break;
        }
        default:
            result = in1/in2;
            break;
    }
    std::cout<<result;
	return 0;
}