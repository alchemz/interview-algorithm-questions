//thisPointer.cpp
#include<iostream>
using namespace std;

class Shape{
public:
	Shape(int l=2, int w=2)
	{
		length = l;
		width = w;
	}
	double Area()
	{
		return length*width;
	}

	//user 'this' to compare areas
	int compareWithThis(Shape shape)
	{
		//return the area of the calling shape
		return this->Area() > shape.Area();
	}

	//'this' is not necessary to compare shapes
	int compare(Shape shapeIn)
	{
		return Area() > shapeIn.Area();
	}
private:
	int length;
	int width;
};

int main(void)
{
	Shape sh1(4,4);
	Shape sh2(2,6);
	if(sh1.compare(sh2))
		cout<<"\nShape2 is smaller than Shape1"<<endl;
	else
		cout<<"\nShape2 is equal to or larger than Shape1"<<endl;

return 0;
}