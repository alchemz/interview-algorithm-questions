//calculator.hpp

void calculate(float m1, float m2, char operation, float &answer);
void printEquation(float m1, float m2, char operation, float result);

void calcuate(float m1, float m2, char operation, float &answer)
{
	switch(operation)
	{
		case '+':
			answer = m1 + m2;
			break;
		case '-':
			answer = m1 - m2;
			break;
		case '*':
			answer = m1 * m2;
			break;
		case '/':
			answer = m1 / m2;
			break;
		default: cout<<"Illegal operation. \n"
	}
}

void printEquation(float m1, float m2, char operation, float result)
{
	cout<<m1<<" "<<operation<<" "<<m2<<"="<<result<<"\n";
}
