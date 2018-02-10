//longestCommonPrefix.cpp
/*
Description:
Write a function to find the longest common prefix string amongst an array of strings
Thoughts:
从左开始一位一位判断当前位置的字符是否属于common prefix。第i位属于common prefix的前提是：

1. i < strs[k].size()，k = 0, 1, ....n-1
2. strs[0][i] = strs[1][i] = ... = strs[n-1][i]

两个条件缺一不可。
*/
class Solution{
public: 
	string longestCommonPrefix(vector<string>& strs){
		string comPrefix;
		if(strs.empty()) return commonPrefix;
		for(int i=0; i<strs[0].size(); i++)
		{
			for(int j=1; j<strs.size(); j++)
			{
				if(i>=strs[j].size() || strs[j][i] != strs[0][i])
					return comPrefix;
			}
			comPrefix.push_back(strs[0][i]);
		}
		return comPrefix;
	}
};