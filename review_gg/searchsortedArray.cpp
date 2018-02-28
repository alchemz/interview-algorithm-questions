class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;
        while (l <= h) {
            int m = l + (h - l) / 2;
            if (target == nums[m])
                return m;
            if (target < nums[m]) {
                if (nums[m] <= nums[l] && nums[m] <= nums[h])/*1:pivot on m's left*/
                    h = m - 1;
                else if (target >= nums[l])/*2:target on pivot's left*/
                    h = m - 1;
                else
                    l = m + 1; /*3*/
            }
            else {
                if (nums[m] >= nums[l])/*1':pivot on m's right*/
                    l = m + 1;
                else if (target >= nums[l])/* 2':pivot on m's right*/
                    h = m - 1;
                else
                    l = m + 1;/* 3'*/
    
            }
        }
        return -1;
    }
};