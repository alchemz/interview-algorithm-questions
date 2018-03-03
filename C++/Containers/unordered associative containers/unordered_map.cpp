#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<string, int> mymap={
		{"Mars",1},
		{"Saturn",2},
		{"Jupiter",2}
	};
	mymap.at("Mars") = 3397;
	mymap.at("Saturn") +=10;
	mymap.at("Jupiter") = mymap.at("Saturn") + 110;

	for(auto& x: mymap){
		cout<<x.first<<": "<<x.second<<endl
	}

	return 0;
}