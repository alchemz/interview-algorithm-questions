class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    	int sum =0;
    	for(int i=0; i<nums.size(); i++)
    		sum+=nums[i];

    	int l=0;
    	int r=sum;
    	for(int j=0; j<nums.size(); j++){
    		r-=nums[j];
    		if(l==r) return j;
    		l+=nums[j];
    	}

        //no index exits
        return -1;
    }
};

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       const int sum = accumulate(nums.begin(), nums.end(),0);
        int r=sum;
        int l=0;
        for(int i=0; i<nums.size(); i++){
            r-=nums[i];
            if(l==r) return i;
            l+=nums[i];
        }
        return -1;
    }
};