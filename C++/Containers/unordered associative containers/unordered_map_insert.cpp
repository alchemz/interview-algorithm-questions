#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
	unordered_map<string, double>
			myreceipe,
			mypantry ={{"milk",2.0},{"floor",1.5}};

	pair<string, double> myshopping("baking power", 0.3);

	myreceipe.insert(myshopping);
	myreceipe.insert(make_pair<string, double>("egg",6.0));
	myreceipe.insert(mypantry.begin(), mypantry.end());
	myreceipe.insert({{"sugar",0.8},{"salt",1.0}});

	cout<<"myreceipe contains: "<<endl;
	for(auto& x: myreceipe)
		cout<<x.first<<": "<<x.second<<endl;

	cout<<endl;
	return 0;
}