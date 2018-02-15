//2_maxSubArray.cpp
/*
题目：Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
Example： For example, given the array [-2,1,-3,4,-1,2,1,-5,4], the contiguous subarray [4,-1,2,1] has the largest sum = 6.
思路： 
典型的DP题：
1. 状态dp[i]：以A[i]为最后一个数的所有max subarray的和。
2. 通项公式：dp[i] = dp[i-1]<=0 ? dp[i] : dp[i-1]+A[i]
3. 由于dp[i]仅取决于dp[i-1]，所以可以仅用一个变量来保存前一个状态，而节省内存。

*/
class Solution{
public:
	int maxSubArray(vector<int> &nums){
		int n = nums.size();
		if(n<=0) return 0;

		int maxSum=nums[0], curSum=nums[0];
		for(int i=1; i<n; i++){
			curSum = curSum<=0 ? nums[i]: nums[i]+curSum;
			maxSum = max(maxSum, curSum);
		}
		return maxSum;
	}
};

//9 ms solution
int maxSubArray(vector<int>& nums){
	int n= nums.size();
	//dp defines as: maxSubArray(int A[], int i)
	//which means the maxSub Array for A[0:i] 
	//which must has A[i] as the end element
	if(n==0) return 0
	int result = INI_MIN;
	int pre = 0;
	for(int i=0; i<n; i++){
		pre = nums[i] + max(pre, 0);
		result = max(result, pre);
	}
	return result;
}

//6ms solution
int maxSubArray(vector<int>& nums){
	if(nums.size()==0) return 0;
	int result = nums[0], sum=nums[0];
	for(size_t i=1; i<nums.size(); i++){
		sum = max(sum+nums[i], nums[i]);
		result = max(result, sum);
	}
	return result;
}

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int result = nums[0], sum = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            sum = max(sum + nums[i], nums[i]);
            result = max(result, sum);
        }
        return result;
    }
};
//difference between ++i, and i++
//difference between size_t, and int