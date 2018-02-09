//mainfun.hpp
#include <iostream>
using namespace std;
void printProduct(int x, int y, int product);
void printEquation(int m1, m2, int sum, char operation);
int sum(m1, m2);

void printProduct(int x, int y, int product)
{
	product = x * y;
	cout<<"The product is "<< product;
}

void printEquation(int m1, int m2, int sum, char operation)
{
	cout<<m1<<operation<<m2<<"="<<sum<<"\n";
}

int sum(int m1, int m2)
{
	int result = m1 + m2;
	return result;
}