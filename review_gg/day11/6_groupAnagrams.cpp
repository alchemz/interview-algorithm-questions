//6_groupAnagrams.cpp
/*
题目：提供一个string, 将变位词组合到一起
举例子：
Given: ["eat", "tea", "tan", "ate", "nat", "bat"]
[
  ["ate", "eat","tea"],
  ["nat","tan"],
  ["bat"]
]
思路：
* 用一个list, 找到第一次string, 从剩下的strings里面找变位词，如果有，将这个string,append，
跳到下个string
* hash table
*Anagrams指几个string有相同的字符，但不同的字符顺序。所以一个有效的检查方法是：
当两个string排序以后相同，则它们是anagrams。
可以使用一个hash table，string s的key是它自己排序后的string，这样anagrams会有相同的key。
用一个vector<int>来记录相同key的string在input vector<string>中的index。
最后扫描一遍hash table，当有两个或以上string有相同的key时，将它们输出到结果。

*/
class Solution{
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs){
		vector<vector<string>> result;
		map<string, int> m;

		for(int i=0; i< strs.size(); i++){
			string key = strs[i];
			sort(key.begin(), key.end());
			if(m.find(key)==m.end()){
				vector<string> v;
				v.push_back(strs[i]);
				result.push_back(v);
				m[key]=result.size()-1;
			}else{
				result[m[key]].push_back(strs[i]);
			}
		}


		for(int i=0; i<result.size();i++){
			sort(result[i].begin(), result[i].end());
		}
		return result;
	}

};