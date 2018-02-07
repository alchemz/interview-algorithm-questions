//read user input with space
//getline(cin, variable)
#include <iostream>
#include <string>

int main()
{
	std::string username;
	std::cout<<"Tell me your nickname?:";
	std::getline(std::cin, userName);
	std::cout<<"Hello "<<userName<<"\n";
	return 0;
}