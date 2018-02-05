//15 string
//string class: uses char array to store character

//C++ program to demonstrate various function string class
using namespace std;

int main(){
	string str1("first string");
	string str2(str1);
	string str3(5, '#'); //initialize by character with number of occurence
	string str4(str1, 6, 6);//from 6th index(second parameter) 6 characters
	string str5(str2.begin(), str2.begin()+5);//initialize by part of another string

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;

	string str6 = str4;
	str4.clear();//deletes all character from string
	int len = str6.length();
	cout <<"Length of string is:" << len << endl;

	char ch = str6.at(2);//same as ch = str6[2]
	char ch_f = str6.front();
	char ch_b = str6.back();
	cout << "First char is: " << ch_f << ", last char is :" << ch_b << endl;

	//append add the argument string at the end
	str6.append(" extension");// same as str6 +="extension"

	str4.append(str6, 0, 6) // at 0th position 6 character
	cout << str6 << endl;
	cout << str4 << endl;

	cout << str6.substr(7, 3) << endl; //substr(a, b) returns a substring of b length

	str6.erase(7,4);//erase(a,b) deletes  b character at index a

	//iterator version of erase
	str6.erase(str6.begin() + 5, str6.end() -3);

	//replace(a, b, str) replaces b character from a index by str
	str6.replace(2,7, "ese are best");

	return 0;
}