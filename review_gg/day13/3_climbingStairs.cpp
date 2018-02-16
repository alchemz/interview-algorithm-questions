//3_climbingStairs.cpp
/*
题目：You are climbing a stair case. It takes n steps to reach to the top.
 In how many distinct ways can you climb to the top?
 Example:
 Input: 3
 Output: 1+1+1, 1+2, 2+1
 Dynamic Programming, DP
 result[i]表示到达i的方法数，step i只可以从爬一步或者两步
 1.result[i]=result[i-1]+result[i-2]
 2. 起始条件，result[1]=1, result[2]=2;
 3. 事实上result[i]只由前两个结果决定，并不需要储存整个队列
*/
class Solution{
public:
	int climbStairs(int n){
		if(n<=0) return 0;
		int p1=1, p2=1;
		for(int i=2; i<=n; i++){
			int temp=p1+p2;
			p1=p2;
			p2=temp;
		}
		return p2;
	}
};