//Remove element
/*
Description:
Given an array and a value, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.
Example:
Given nums = [3,2,2,3], val = 3,
Your function should return length = 2, with the first two elements of nums being 2.
*/

class Solution{
public:
	int removeElement(vector<int>& nums, int val){
		int k = -1;
		for(int i =0; i<nums.size(); i++){
			if(nums[i] != val) 
				nums[++k] = nums[i];
		}
		return k+1;
	}	
};

/*
Thoughts:

直观解法是扫描数组，当遇到value时，将value右边所有元素向左移一格，直接到扫完所有数字。但这种解法在移动操作上的消耗是很大的，最差情况时间复杂度为O(n^2)。

由于数组元素顺序不需要维持，可以采取当遇到value时，用顺组尾部元素来填充。同样是双指针的技巧：left指针扫描数组，right指针表示当前数组的尾端。
(1) A[left]=value时，A[left] = A[right], right--，但不能left++，因为也可能A[right]=value
(2) A[left]!=value时，left++
*/
class Solution{
public: 
	int removeElement(int A[], int n, int elem){
		int left=0, right=n-1;
		while(left<=right){
			if(A[left]==elem)
				A[left]=A[right--];
			else
				left++;
		}
		return right+1;
	}
}