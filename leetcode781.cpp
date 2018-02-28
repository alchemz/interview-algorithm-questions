//graph search/dp, cheapest flight within k stops
/*
Time complexity
Space complexity

Bellman-Ford's Algorithm
*/
//Space Compression: O(k*n)
class Solution{
public:
	int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){
		constexpr int kInfCost = 1e9;
		vector<vector<int>> dp(K+2, vector<int>(n, kInfCost));
		dp[0][src] = 0;

		for(int i=1; i<=K+1; ++i){
			dp[i][src] = 0;
			for(const auto& p: flights)
				dp[i][p[1]] = min(dp[i][p[1]], dp[i-1][p[0]]+p[2]);
		}
		return dp[K+1][dst] >= kInfCost ? -1: dp[K+1][dst];
	}
};


//Space compression: O(n)
class Solution{
public:
	int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K){
		constexpr int kInfCost = 1e9;
		vector<int> cost(n, kInfCost);
		cost[src] = 0;

		for(int i=0; i<=K; ++i){
			vector<int> tmp(cost);
			for(const auto& p: flights)
				tmp[p[1]] = min(tmp[p[1]], cost[p[0]]+p[2]);
		cost.swap(tmp);
		}
		return cost[dst] >= kInfCost ? -1: cost[dst];
	}
}