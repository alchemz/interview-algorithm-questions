class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         if(num.size()<2) return;
        int n = num.size(), j = n-2;
        while(j>=0 && num[j]>=num[j+1]) j--;
        
        if(j<0) {
            sort(num.begin(),num.end());
            return;
        } 
        
        int i=j+1;
        while(i<n && num[i]>num[j]) i++;
        i--;
        
        swap(num[i],num[j]);
        sort(num.begin()+j+1, num.end());
    }
};