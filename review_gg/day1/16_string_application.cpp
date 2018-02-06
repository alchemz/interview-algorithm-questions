//16 string applications
#include<bits/stdc++.h>
using namespace std;

//this function returns floating point part of a number-string
string returnFloatingPart(string str)
{
	int pos = str.find(".");
	if(pos == string::npos)
		return "";
	else 
		return str.substr(pos+1);//returns substring
}

//this function checks whether string constains all digit or not
bool containOnlyDigit(string str)
{
	int l = str.length();
	for (int i =0; i < l; i++)
	{
		if(str.at(i) < '0' || str.at(i) > '9')
			return false;
	}

	return true;
}

//this function replaces all single space by %20
//used in URLS
string replaceBlankWith20(string str)
{
	string replaceby = "%20";
	int n = 0;
	while((n=str.find(" ", n))!= string::npos)
	{
		str.replace(n, 1, replaceby);
		//iterators to the next blank
		n += replaceby.length();
	}

	return str;
}

int main()
{
	string fnum="23.342";
	//output the floating part
	cout <<"Floating part is: " << returnFloatingPart(fnum)<<endl;

	string num = "3452";
	//true or false, if the number contains only digit
	if(containOnlyDigit(num))
		cout <<"string contains only digit"<<endl;

	//replace the blank " "with%20
	string urlex = "google com in";
	cout << replaceBlankWith20(urlex) << endl;

	return 0;
}