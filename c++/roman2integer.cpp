//roman to integer
//given a roman numeral, convert it to an integer
//input is guaranteed to be within the range from 1 to 3999
//I-1
//X-10
//C-100
//M-1000
//VI=5+1=6
//IV=5-1
//hashmap
class Solution{
public:
	int romanToInt(string s){
		string dict[] = {"M", "CM", "D", "CD", "XC","C", "L", "XL", "X", "IX", "V", "IV", "I"};
		int num[]={1000, 900, 500,400,100,90,50,40,10,9,5,4,1};
		int i = 0, index =0, ret=0;
		while(i<s.size()&& index<13){
			string target = dict[index];
			string cur = s.substr(i, target.size());
			if(cur==target){
				ret +=num[index];
				i +=target.size();
			}
			else{
				index++;
			}
		}
		return ret;
	}
}

class Solution(object):
	def romanToInt(self, s):
		sum=0
		pre=2000
		cur=0
		Map={'I':1, 'V':5, 'X':10, 'C':100, 'D':500, 'M':1000}
		for i in range(len(s)):
			cur = Map[s[i]]
			sum = sum + Map[s[i]]
			if cur > pre:
				sum = sum-2*pre
			pre = cur;
		return sum

/*
use hashtable
substractive notation and additive notation
更简洁清楚的解法： 
找下subtractive notation的规律，以简单的例子s = IX 说明。
1. 如果按照additive性质的话应该ret = 1+10 = 11。但因为num(X)=10>num(I)=1，ret = 10 - 1。
2. 将subtractive rule转换成等效的additive rule：ret = 1 + (10 - 2*1)

建立一个罗马字符对应整数的hash table ht。
当ht[s[i]] > ht[s[i-1]]，即为subtractive nontation：ret += (ht[s[i]] - 2*ht[s[i-1]])
否则为additive nontation：ret+=ht[s[i]]
http://bangbingsyb.blogspot.com/2014/11/leetcode-roman-to-integer.html
*/
class Solution{
public:
	int romanToInt(string s){
		if(s.empty()) return 0;
		unordered_map<char, int> hasht({
		{'I',1}, {'V', 5}, {'X', 10},
		{'L', 50}, {'C', 100}, {'D',500},
		{'M',1000}
		});
		int ret =0;
		for(int i=0; i<s.size(); i++){
			if(hasht.count(s[i])==0) return 0;
			ret += hasht[s[i]];
			if(i !=0 && hasht[s[i]] > hasht[s[i-1]])
				ret -= 2*hasht[s[i-1]];
		}
		return rest;
	}
};