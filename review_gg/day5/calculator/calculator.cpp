//calculator.cpp
#include "calculator.hpp"
int main()
{
	float m1=3, m2=10;
	float result;
	float operation='*';
	calculate(m1, m2, operation, result);
	printEquation(m1, m2, operation, result);
	return 0;
}