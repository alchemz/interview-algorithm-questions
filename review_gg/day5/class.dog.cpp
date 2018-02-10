//class.dog.cpp
#include <iostream>
using namespace std;
class Dog
{
    string name;//members
    int licenseNumber;
public: 
    void setName(string nameIn);
    void setLicenseNumner(int licenseNumber);

    string getName();
    int getLicenseNumner();
    void printInfo();
};

void Dog::setName(string nameIn)
{
    name = nameIn;
}
void Dog::setLicenseNumner(int licenseNumberIn)
{
    licenseNumber=licenseNumberIn;
}
string Dog::getName()
{
    return name;
}
int Dog::getLicenseNumner()
{
    return licenseNumber;
}
void Dog::printInfo()
{
    cout<<name<<" "<<licenseNumber;
}

int main()
{
    Dog dog1, dog2;
    dog1.setName("Tivel");
    dog1.setLicenseNumner(1234);
    dog2.setName("Loy");
    dog2.setLicenseNumner(4567);

    dog1.printInfo();
    cout<<"\n";
    dog2.printInfo();

    return 0;
}