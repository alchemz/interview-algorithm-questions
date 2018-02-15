//4_jumpGame.cpp
/*
题目：给一个由非负整数组成的array, 起始位置是first index，每一个元素代表最多可以跳多少步数
问题是是否能够到达最后一个index
例子：
A = [2,3,1,1,4], return true.
起始是2，跳两步到1，跳一部，跳一步，跳四步，超过终点
A = [3,2,1,0,4], return false.
起始是3，跳三步到0，停止
*/
//error
class Solution{
public:
	bool canJump(vector<int>& nums){
		int n=nums.size();
		int jump;
		for(int i=0; i<=n;i++){
			if(nums[i]==0){
				for(int j=i; j>=0; j--){
					jump += nums[j];
				}

				if(jump >=n)
					return true;
				else
					return false;
			}
		}
	}
};

//greedy
/*思路
注意题目中A[i]表示的是在位置i，“最大”的跳跃距离，而并不是指在位置i只能跳A[i]的距离。所以当跳到位置i后，能达到的最大的距离至少是i+A[i]。用greedy来解，记录一个当前能达到的最远距离maxIndex：

1. 能跳到位置i的条件：i<=maxIndex。
2. 一旦跳到i，则maxIndex = max(maxIndex, i+A[i])。
3. 能跳到最后一个位置n-1的条件是：maxIndex >= n-1
*/
class Solution{
public:
	bool canJump(vector<int>& nums){
		int maxIndex=0;
		int n= nums.size();
		for(int i=0; i<n; i++){
			if(i>maxIndex||maxIndex>=(n-1)) break;
			maxIndex = max(maxIndex, i+nums[i]);
		}
		return maxIndex >=(n-1)? true:false;
	}
};