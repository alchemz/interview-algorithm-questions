//2_plusOne.cpp
/*
题目：有一个非负整数，代表一个非空array of digits. 
plus one to the integer.

You may assume the integer do not contain any leading zero, except the number 0 itself.

The digits are stored such that the most significant digit is at the head of the list.
逐位加法，与Add Two Numbers和Add binary相似
*/

class Solution{
public:
	vector<int> plusOne(vector<int>& digits){
		int i=digits.size()-1;
		if(i<0){
			digits.push_back(1);
			return digits;
		}
		bool carry = true;
		while(i>=0 && carry){
			digits[i] += 1;
			if(digits[i] >9){
				digits[i] -=10;
				carry = true;
			}else{
				carry = false;
			}
			i--;
		}
		if(carry){
			digits.insert(digits.begin(),1);
		}
		return digits;
	}
};