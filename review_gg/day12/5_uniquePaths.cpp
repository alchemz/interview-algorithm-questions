//5_uniquePaths.cpp
/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?
Note: m and n will be at most 100.
*/
/*
Climbing Stairs二维版。计算解个数的题多半是用DP。而这两题状态也非常显然，dp[i][j]表示从起点到位置(i, j)的路径总数。DP题目定义好状态后，接下去有两个任务：找通项公式，以及确定计算的方向。

1. 由于只能向右和左走，所以对于(i, j)来说，只能从左边或上边的格子走下来：
dp[i][j] = dp[i-1][j] + dp[i][j-1]

2. 对于网格最上边和最左边，则只能从起点出发直线走到，dp[0][j] = dp[i][0] = 1

3. 计算方向从上到下，从左到右即可。可以用滚动数组实现。
*/
class Solution{
public:
	int uniquePaths(int m, int n){
		if(m<1 || n<1) return 0;
		vector<int> dp(n, 1);
		for(int i=1; i<m; i++){
			for(int j=1; j<n; j++){
				dp[j] +=dp[j-1];
			}
		}
		return dp[n-1];
	}
};