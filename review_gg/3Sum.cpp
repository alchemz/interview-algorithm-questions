//3Sum.cpp
/*
Description:
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array 
which gives the sum of zero.
For example, given array S = [-1, 0, 1, 2, -1, -4],
A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
思路：
题目要求的是a+b+c=0，问题可以推广到a+b+c=target。3sum问题可以转化为2sum问题：对于任意一个A[i]，在数组中的其他数中解2sum问题，目标为target-A[i]。与2sum那题不同，这题要求返回的不是index而是数字本身，并且解不唯一。同时要求解排序并去重。

对排序来说，2sum中的双指针法更为方便，因为算法本身就用到排序。双指针排序法本身会去除一些重复的可能性：

(1, 2, 3, 4), target = 6
在扫描1时，解(2, 3, 4)的2sum = 5问题，找到一个解(1, 2, 3)。
在扫描2时，应当只对后面的数解2sum问题，即对(3, 4)解2sum = 4问题。这样避免再次重复找到解(1, 2, 3)。

但当存在重复数字时，光靠排序仍然无法去重：

(1, 2, 2, 2, 3, 4), target = 9
扫描第一个2时，解(2, 2, 3, 4)中的2sum=7问题，得到解(2, 3, 4)
扫描第二个2时，解(2, 3, 4)中的2sum=7问题，仍然会得到(2, 3, 4)

去除因重复数字而造成重复解有两个办法，一是将结果存到一个hash table中。由于STL的hash table (unordered_set, unordered_map)并不能为vector类型，除非自己提供一个hash function，颇为不便，也增加额外存储空间。而另一种方法就是在扫描数组时跳过重复的数字。上例中，只扫描1, 2, 3, 4来求相应的2sum问题。进一步简化，可以只扫描1, 2。因为3已经是倒数第二个数字，不可能有以它为最小数字的解。

*/

class Solution{
public:
	vector<vector<int>> threeSum(vector<int>& num)
	{
		return threeSumGen(num, 0);
	}
	vector<vector<int>> threeSumGen(vector<int> &num, int target)
	{
		vector<vector<int>> allSol;
		if(num.size() < 3) return allSol;
		sort(num.begin(), num.end());
		for(int i=0; i<num.size()-2; i++)
		{
			if(i>0 && num[i]==num[i-1]) continue;
			int left=i+1, right=num.size()-1;
			while(left<right){
				int curSum= num[left] + num[right];
				int curTarget = target - num[i];
				if(curSum == curTarget)
				{
					vector<int> sol;
					sol.push_back(num[i]);
					sol.push_back(num[left]);
					sol.push_back(num[right]);
					allSol.push_back(sol);
					left++;
					right--;
					while(num[left]==num[left-1]) left++;
					while(num[right]==num[right+1]) right--;
				}
				else if(curSum < curTarget)
					left++;
				else
					right--;
			}
		}
		return allSol;
	}

};