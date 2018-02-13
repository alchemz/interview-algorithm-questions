//search insert position
/*
Description:
Given a sorted array and a target value, 
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
Example:
Input: [1,3,5,6], 5
Output: 2
Input: [1,3,5,6], 2
Output: 1
*/
/*
Thoughts:
二分法
*/
//4
//[1,3,5,6,8,11,13]
//l=0, r=7-1=6, mid=3 mid>target, r=3-1=2
//l=0, r=2, mid=2-0/2=1, mid=3<4, l=1+1=2
//l=2, r=2, mid=2, 3<4, l=2+1=3, return 3
class Solution
{
public:
	int searchInsert(vector<int> &nums, int target)
	{
		int n= nums.size(), head = 0, end = n-1;
		while(head <= end)
		{
			int mid = head + (end-head)/2;
			if(n==mid) return n;
			if (nums[mid] == target) return mid;
			else if(nums[mid] > target) end = mid -1;//左移
			else head = mid+1;//右移
		}
		return head;
	}
};
