#include<iostream>
#include<map>
using namespace std;

int main()
{
	multimap<char, int> mymultimap;
	mymultimap.insert(pair<char, int>('a',1));
	mymultimap.insert(pair<char, int>('b',2));
	mymultimap.insert(pair<char,int>('c',20));
	mymultimap.insert(pair<char,int>('d',100));

	//show content
	for(multimap<char,int>::iterator it = mymultimap.begin(); it != mymultimap.end(); it++)
		cout<<" "<<(*it).first <<" "<<(*it).second;

	return 0;
}