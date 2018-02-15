//1_lengOfLastWord.cpp
/*
题目：strings s由大写，小写两种字母，空格''组成，返回最后一个词的长度
例子：
"Hello World"
5
*/
//wrong
class Solution{
public:
	int lengthOfLastWord(string s){
		for(int i=0; i<s.length(); i++){
			if(s[i]==" "){
				return s.length()-i; 
			}
		}
	}
};

//
class Solution{
public:
	int lengthOfLastWord(const char *s){
		//lastLen记录前一个长度，curLen记录当前长度
		int lastLen =0, curLen =0;
		while(*s){
			if(isalpha(*s))
				curLen ++;
			else if(curLen !=0){
				lastLen = curLen;
				curLen = 0;
			}
			s++;
		}
		return curLen==0? lastLen: curLen;
	}
};
//Approach: Start traversing from the right, and continue til a space is not found.
class Solution{
public:
	int lengthOfLastWord(string s){
		//get the length of input string
		int len= s.length();
		//set the start index and end index
		int i= len-1, j=0;
		//倒着检测，if find element = ' '
		while(s[i]==' '){
			i--;
		}
		while(i>=0 && ((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z'))){
			i--;
			j++;
		}
		return j;
	}
};