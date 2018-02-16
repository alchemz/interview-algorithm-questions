//1_addBinary.cpp
/*
题目：有俩个binary string, 返回一个sum, 也是binary string
例子：
a="11", b="1", return "100"
思路：
从末尾开始向左，依次相加每一位，如果大于1，则向前进1,将每一位push_back到一个新的string
*/
class Solution{
public:
	string addBinary(string a, string b){
		int carry=0;
		string sum;
		//reverse string
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		//find which string has longer length
		int n= max(a.size(), b.size());
		for(int i=0; i<n; i++){
			//iterates through each character in string a,b
			if(i<a.size()) carry +=(a[i]-'0');
			if(i<b.size()) carry +=(b[i]-'0');
			//append character to string
			sum.push_back(carry%2+'0');
			carry /=2;
		}
		//if carried, then append character 1 to string
		if(carry) sum.push_back('1');
		//reverse the sum string
		reverse(sum.begin(), sum.end());
		return sum;

	}	
};