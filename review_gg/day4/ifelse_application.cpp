#include <iostream>
using namespace std;

int main(){
	char skin, location;
	cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
	cin>>skin;
	cout<<skin<<"\n";

	cout<<"Get a dog\n";
	cout<<"Get a bird\n";
	cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
	cin>>location;
	cout<<location;

	cout<<"Would like a animal like fish(f), gecko(g), or frog(o)?";
	cin>>choice;
	if(choice==f){
		cout<<"Get a fish\n";
	}
	else if(choice==g)
	{
		cout<<"Get a gecko\n";
	}
	else
	{
		cout<<"Get a frog\n";
	}
}