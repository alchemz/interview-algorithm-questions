//1_pow.cpp
/*
Example:
Input: 2.00000, 10
Output: 1024.00000
*/
//original solution, 显示超出时间，O(n)
double myPow(double x, int n){
	if(n==0) return 1.0;
	if(n<0) return 1.0/myPow(x, -n);
	return x*pow(x, n-1);
}

//O(logn), 递归关系： w(x, n)=pow(x, n/2)*pow(x, n-n/2); 超时
double myPow(double x, int n){
	if(n==0) return 1.0;
	if(n<0) return 1.0/myPow(x, -n);
	double half = myPow(x, n/2);
	if(n%2==0) return half*half;
	else return half*half*x;

}
//passed

class Solution{
public:
	double myPow(double x, int n){
		if(n==0) return 1.0;
		double half=myPow(x, n/2);
		if(n%2==0) return half*half;
		else if(n>0) return half*half*x;
		else return half*half/x;
	}
};

//6ms
class Solution{
public:
	double myPow(double x, int n){
		double half = myPow(x, n/2);
		if(n<0) return (1/x)*myPow(1/x, -(n+1));

		if(n==0) return 1;
		if(n%2==0){	
			return half * half;
		}else{
			return x*half*half;
		}
	}
};

