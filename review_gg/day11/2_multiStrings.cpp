//2_multiStrings.cpp
/*
Description:
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2.
*/
/*
思路：
num1='12', num2='230566'.
n1=num1.size(), n2=num2.size();
2*(6*1+6+10+5*100+0*1000+3*10000+2*100000)+ 1*10*(6*1+6+10+5*100+0*1000+3*10000+2*100000)
=(2*1+1*10)*(6*1+6+10+5*100+0*1000+3*10000+2*100000)
*/
class Solution{
public:
	string multiply(string num1, string num2){
		int num1_=0, num2_=0;
		for(int i=0; i< num1.size(); i++){
			num1_ += num1[i]*pow(10, i);
		}
		for(int j=0; j< num2.size(); j++){
			num2_ += num2[j]*pow(10,j);
		}
		int result;
		result = num1_*num2_;
		return result;
	}
};//compile error

class Solution{
public:
	string multiply(string num1, string num2){
		if(num1.empty() || num2.empty()) return "";
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		string result(num1.size()+num2.size(),'0');

		for(int j=0; j<num2.size(); j++){
			int carry = 0;
			int val = num2[j]-'0';
			for(int i=0; i<num1.size(); i++){
				carry += ((num1[i]-'0')*val+(result[i+j]-'0'));
				result[i+j]= carry%10+'0';
				carry /=10;
			}
			if(carry !=0) result[num1.size() + j]=carry+'0';
		}
		reverse(result.begin(), result.end());

		int count = 0;
		while(count<result.size() - 1 && result[count]=='0') count++;
		result.erase(0, count);
		return result;
	}
};