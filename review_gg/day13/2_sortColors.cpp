//2_sortColors.cpp
/*
Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, 
with the colors in the order red, white and blue.
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
*/
class Solution{
public:
	void sortColors(vector<int>& nums){
		int n = nums.size();
		int left=0, right=n-1;
		int i=0;
		while(i<=right){
			if(nums[i]==0)
				swap(nums[i++],nums[left++]);
			else if(nums[i]==1)
				i++;
			else if(nums[i]==2)
				swap(nums[i], nums[right--]);
		}
	}
};