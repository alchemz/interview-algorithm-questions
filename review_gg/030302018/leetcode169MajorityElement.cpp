class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        else{
            sort(nums.begin(), nums.end());
            return nums[n/2];
        }
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //use hashtable, key for num, value for times
        unordered_map<int, int> count;
        const int n = nums.size();
        for(const int num: nums)
            if(++count[num]>n/2) return num; //return majority
        return -1; //return false
    }
};

//key is in small number, use map rather than hashtable
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //use hashtable, key for num, value for times
        map<int, int> count;
        const int n = nums.size();
        for(const int num: nums)
            if(++count[num]>n/2) return num; //return majority
        return -1; //return false
    }
};