//longest substring without repeating characters
/*
* Given "abcabcbb", the answer is "abc", which length is 3
* Given "bbbbb", the answer is "b", which length is 1
* Given "pwwkew", the answer is "wke", with the length of 3
*/
/*
Goal: 寻找最长字符串
1. 向右扩展子串，维持两个变量i, j来维持新的子串
2. j移动，每加入一个新的字符，判断是否重复
3. 有重复，移动i, 生成新子串
4. 没有，j继续移动。
len = max(len, j-i+1)
*/
class Solution{
	public:
	int lengthOfLongestSubstring(string s)
	{
		//hashmap
		unordered_map<char, int> mymap;
		unordered_map<char, int>::iterator it;
		int len=0, i=-1;
		for(int j=0;j<s.length();j++)
		{
			//是否有重复
			it = mymap.find(s.at(j));
			if(it != mymap.end())
				//有重复，移动i
				i=std::max(it->second,i);
			//没有重复，把新的字符加入
			len=std:max(len,(j-i));

		}
		return len;
	}
};

//255 ASCII
//上面用了一个trick就是每个数组的初始化为-1表示没有出现重复，
//它不可能比i的初始值大，如果有重复的，直接覆盖，这样可以不用额外的语句判断是否出现重复。
class Solution{
public:
	int lengthOfLongestSubstring(string s){
		vector<int> mymap(255,-1);
		int len=0, i=-1, tmp;
		for(int j=0; j<s.length();j++){
			tmp = mymap[s.at(j)];
			i= std::max(tmp, i);
			mymap[s.at[j]]=j;
			len = std::max(len, (j-i));
		}
		return len;
	}
};