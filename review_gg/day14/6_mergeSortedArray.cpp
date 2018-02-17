//6_mergeSortedArray.cpp
/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. 
The number of elements initialized in nums1 and nums2 are m and n respectively.
*/
//wrong
class Solution{
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
		for(int i=0; i<nums2.size(); i++){
			nums1[i].push_back(nums2[i]);
		}
		sort(nums1.begin(), nums1.end());
	}
};
//right
/*
直观思路显然是双指针i, j同时扫描A, B，选min(A[i], B[j])作为下一个元素插入。但是只能利用A后面的空间来插入，这样就很不方便了。
反向思路，merge后的数组一共有m+n个数。i, j从A, B尾部扫描，选max(A[i], B[j])插入从m+n起的尾部。这样也可以防止插入到A原来数字的范围内时，overwrite掉A原来的数。
*/
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
	//the pointer for arr1, arr2, and merged arr
	int pa = m-1, pb = n-1, pc = m+n-1;
	//scan all elements of nums1 and nums2
	while(pa >= 0 && pb>=0){
		if(nums1[pa] > nums2[pb])
			//reversely, assign the large value to the merged array
			nums1[pc--]=nums1[pa--];
		else
			nums1[pc--]=nums2[pb--];
	}
	//因为是把B组放到A里面，如果A还有元素没有扫到，表面B已经扫完了，剩下的部分不用动了。
	//while(pa>=0) nums1[pc--]=nums1[pa--];
	while(pb>=0) nums1[pc--]=nums2[pb--];
}