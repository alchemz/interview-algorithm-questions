//container with most water
/*
Description:
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that 
the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that 
the container contains the most water.
Note: You may not slant the container and n is at least 2.
*/
/*
Thoughts:
left = 0, right = n-1
(1) a[left] < a[right], left++
(2) a[left] > a[right], right--
(3) a[left] = a[right], left++, right--
终止条件：left>-right

*/
class Solution{
public:
	int maxArea(vector<int>& height){
		int maxArea = 0;
		int left =0, right = height.size()-1;
		while(left<right){
			int curArea = min(height[left], height[right])*(right-left);
			maxArea = max(curArea, maxArea);
			if(height[left] < height[right])
				left++;
			else if(height[left] > height[right])
				right--;
			else{
				left++;
				right--;
			}

		}
		return maxArea;
	}
};