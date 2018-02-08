#include <iostream>
#include <string>

using namespace std;
int main(){
	string TorF[] = {"False", "True"};

	int a = 100;
	int b = 33;
	int c = 33;
	cout<<"a<b is "<<TorF[a<b];
	cout<<"\na>b is "<<TorF[a>b];
	cout<<"\na !=b is "<<TorF[a!=b];
	cout<<"\nc>=b is "<<TorF[c>=b];
	cout<<"\nc<=b is "<<TorF[c<=b];
	return 0;
}