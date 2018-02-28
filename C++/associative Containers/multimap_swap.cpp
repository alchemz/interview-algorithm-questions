#include<iostream>
#include<map>
using namespace std;

int main(){
	multimap<char, int> foo, bar;
	foo.insert(make_pair('x', 100));
	foo.insert(make_pair('y', 11));

	bar.insert(make_pair('a',11));
	bar.insert(make_pair('d',12));
	bar.insert(make_pair('y',11));

	foo.swap(bar);

	cout<<"The foo contains: \n";
	for(multimap<char,int>::iterator it = foo.begin(); it != foo.end(); it++)
		cout<<(*it).first<<" "<<(*it).second<<endl;
	cout<<"The bar contains: \n";
	for(multimap<char, int>::iterator it = bar.begin(); it !=bar.end(); it++)
		cout<<(*it).first<<" "<<(*it).second<<endl;;

	return 0;
}