//1_minimumPathSum.cpp
/*
题目：有一个mxn的格子，里面都是非负数，找到一条通道，可以从左上角到右下角的，并且经过的数字
之和相加最小
例子:
[[1,3,1],
 [1,5,1],
 [4,2,1]]
 return 7
*/
/*BFS, breadth-first search
经典dp(dynamic programming)问题， 设dp[i][j]表示a[0][0]到a[i][j]最小路径
动态方程dp[i][j]=MIN(dp[i-1][j],dp[i][j-1])
O(mn)
*/
class Solution{
public:
	int minPathSum(vector<vector<int>> & grid){
		if(grid.size()<1) return 0;

		int n=grid.size();
		int m=grid[0].size();

		vector<vector<int>> dp(n, vector<int>(m, 0));

		dp[0][0] = grid[0][0];

		for(int i=1; i<n; ++i)
			dp[i][0]=dp[i-1][0]+grid[i][0];
		
		for(int j=1; j<m; ++j)
			dp[0][j]=dp[0][j-1]+grid[0][j];

		for(int i=1; i<n; ++i)
			for(int j=1; j<m; ++j)
				dp[i][j]=min(dp[i-1][j], dp[i][j-1])+grid[i][j];
		return dp[n-1][m-1];
	}
};
