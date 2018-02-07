//Palindrome Number
//determine whether an integer is a palindrome. do this without extra space

class Solution{
public:
	bool isPalindrome(int x)
	{
		if(x<0) return false;
		int r=0, t;
		t = x;
		while(t != 0)
		{
			r = r*10 + t%10;
			t /=10;
		}
		return r==x;
	}

};