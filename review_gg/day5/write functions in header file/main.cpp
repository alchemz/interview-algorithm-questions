#include "main.hpp"

int main()
{
	int m1=3, m2=4, product;
	char operation='+';
	
	printProduct(m1, m2, product);
	printEquation(m1, m2, sum(m1, m2), operation);
	return 0;
}