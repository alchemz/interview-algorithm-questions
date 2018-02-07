//remove duplicates from sorted array
/*
Description:
Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example:
Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
It doesn't matter what you leave beyond the new length.

Thoughts:
双指针，一个指针 i 扫描数组，一个指针 end 记录没有重复数字的新数组的尾部。
(1) A[end]=A[i]，A[i]为重复数字，跳过。
(2) A[end]!=A[i]，将A[i]放到A[end+1]位置，end++
*/
class Solution{
public:
	int removeDuplicates(int A[], int n){
		if(n<2) return n;
		int end=0;
		for(int i=1; i<n; i++){
			if(A[i] !=A[end]){
				end++;
				if(i!=end) A[end]=A[i];
			}
		}
		return end+1;
	}

	int removeDuplicates(vector<int>& nums){
		if(nums.size()<=1) return nums.size();
		int k=0;
		for(int i=1; i<nums.size();i++){
			if(nums[i] != nums[k]){
				nums[++k]=nums[i];
			}
		}
		return k+1;
	}
}

