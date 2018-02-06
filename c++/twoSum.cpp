//two sum: Given array of integers, return indices of two numbers add up to a targeted sum
/*
Given nums=[2, 7, 11, 15], target =9
Because nums[0] + nums[1] = 2+ 7 =9
return [0,1]
*/

//Brute Force, look through each element to find if there is another element to add up to target
//O(n^2)
class Solution{
	public:
	vector<int> twoSum(vector<int>& nums, int target){
		vector<int> res;
		for(int i=0; i<numbers.size()-1;i++){
			for(int j=i+1; j<numbers.size(); j++){
				if(numbers[i]+numbers[j]==target){
					res.push_back(i+1);
					res.push_back(j+1);
					return res;
				}
			}
		}
		return res;
	}
}

//O(n)
class Solution{
public:
	vector<int> twoSum(vector<int> &numbers, int target){
		vector<int> res;
		map<int,int>hmap;
		hmap.clear();
		for(int i-0; i<numbers.size();i++){
			hmap[numbers[i]]=i;
		}
		for(int i=0; i<numbers.size();i++){
			int threh = target - numbers[i];
			if(hmap.find((threh) !=hmap.end())){
				if(i>hmap[threh]){
					res.push_back(i+1);
					res.push_back(hmap[threh]+1);
					return res;
				}
				if(i>hmap[threh]){
					res.push_back(hmap[threh]+1);
					res.push_back(i+1);
					return res;
				}
			}
		}
	}
}

