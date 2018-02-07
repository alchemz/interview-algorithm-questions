//reverse integer
/*
*Input: 123
*Output:321
*Input:-123
*Output:-321
*Input:120
*Output:21
*/

class Solution{
public:
	int reverse(int x){
		//1.find x is negative or positive 
		//2.find digits of x
		//123%10=3 is the first digit
		//123%100=23 23-3 is the second digit
		//123%1000=123 123-20-3= 100
		long tmp =0;
		while(x !=0)
		{
			tmp *=10;
			tmp += x%10;
			if(tmp > INT_MAX || tmp <INT_MIN)
				return 0;
			x /=10;
		}
		
		return tmp;
	}
};