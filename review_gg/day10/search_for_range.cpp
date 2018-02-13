//2/12/2018
/*
Description:
Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.
Your algorithm's runtime complexity must be in the order of O(log n).
If the target is not found in the array, return [-1, -1].
For example,
Given [5, 7, 7, 8, 8, 10] and target value 8,
return [3, 4].
*/
/*
Thoughts:
1. O(logn)-二分法
2. rules: A[mid] < target, st = mid +1 右移
3. rules: A[mid] > target, ed = mid -1 左移
4. rules: A[mid] == target, ed = mid
5. end loop: while(st<ed)
*/
//Runtime complexity: O(logn)
class Solution{
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> result = {-1, -1};
		if(nums.empty()) return result;
		int lb =-1, ub=nums.size();
		while((lb +1) <ub){
			int mid = lb+(ub-lb)/2;
			if(nums[mid]<target) lb = mid;
			else ub=mid;
		}
		if((ub<nums.size()) && (nums[ub]==target)) result[0]=ub;
		else return result;

		ub = nums.size();
		while((lb+1) < ub){
			int mid = lb+ (ub-lb) /2;
			if(nums[mid]>target) ub=mid;
			else lb = mid;
		}
		result[1]=ub-1;
		return result;
	}
};