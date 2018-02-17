//2_searchRotatedArray.cpp
//asume duplicates existed

class Solution{
public:
	bool search(vector<int>& nums, int target){
		int start=0, end=nums.size()-1;
		while(start<=end){
			int mid = start+ (end-start)/2;
			if(nums[mid]==target) return true;
			if(nums[mid]<nums[end]){
				if(target>nums[mid] && target<=nums[end])
					start = mid+1;
				else
					end = mid-1;
			}
			else if(nums[mid]>nums[end]){
				if(target>=nums[start]&& target<nums[mid])
					end = mid-1;
				else
					start = mid+1;
			}
			else{
				end--;
			}
		}
		return false;
	}
};
//binary search, search rotated array I
class Solution{
public:
	int search(int A[], int n, int target){
		return searchRotatedSortedArray(A, 0, n-1, target);
	}
	int searchRotatedArray(int A[], int start, int end, int target){
		if(started>end) return -1;
		int mid= start+ (end-start)/2;
		if(A[mid]==target) return mid;
		if(A[mid]<A[end]){
			if(target>A[mid] && target<=A[end])
				return searchRotatedSortedArray(A, mid+1, end, target);
			else
				return searchRotatedSortedArray(A, start, mid-1, target);
		}
		else{
			if(target>=A[start]&& target<A[mid])
				return searchRotatedSortedArray(A, start, mid-1, target);
			else
				return searchRotatedSortedArray(A, mid+1, end, target);
		}
	}
};