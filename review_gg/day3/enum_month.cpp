#include <iostream>
using namespace std;

int main()
{
	//define MONTH as having 12 possible values
	enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

	//define bestMonth as a variable type MONTH
	MONTH bestMonth;

	bestMonth = Jan;
	if(bestMonth == Jan)
	{
		cout<<"I am not so sure January is the best Month.\n";
	}
	return 0;
}