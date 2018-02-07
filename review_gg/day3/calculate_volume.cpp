//calculate volume of a cube, a sphere, and a cone.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float cubeV, sphereV, coneV;
	float cubeSide =5.4;
	float sphereRadius = 2.33;
	float coneRadius = 7.65;
	float coneHeight = 14;

	cubeV = pow(cubeSide, 3);
	sphereV = (4.0/3.0)*M_PI*pow(sphereRadius, 3);//4/3*pi*r^3
	coneV = M_PI*pow(coneRadius,2)*coneHeight/3;//pi/3*r^2*h
}

What is the first coefficient?3
What is the exponent of the first term?2
What is the second coefficient?4
What is the exponent of the second term?1
What is the constant?32
The polynomial we are solving is:
	3*x^2 + 4*x^1+ 32
What is the value of x?4
y = 3*4^2 + 4*4^1+ 32 = 64