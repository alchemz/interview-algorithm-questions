//valid parentheses
/*
Description:
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

example cases:
([{}]) should also be valid
thoughts:
括号匹配问题用stack解再合适不过。括号组合是否有效，主要看右括号。右括号的数量必须要等于相应的左括号。而左右括号之间也必须是有效的括号组合。

1. 当前括号是左括号时，压入stack。
2. 当前括号是右括号时，stack.top()如果不是对应的左括号，则为无效组合。否则，pop掉stack里的左括号。
3. 所有字符都判断处理过后，stack应为空，否则则无效。
*/
class Solution{
public: 
	bool isValid(string s){
		stack<char> stk;
		for(int i-0; i<s.size; i++){
			if(isLeft(s[i])){
				stk.push(s[i]);
			}
			else{
				if(stk.empty() || !isClose(stk.top(), s[i]))
					return false;
				stk.pop();
			}
		}
		return stk.empty();
	}
	bool isLeft(char a){
		return(a=='(' || a=='{' || a=='[');
	}

	bool isClose(char a, char b){
		if(a=='(') return b==')';
		if(a=='[') return b==']';
		if(a=='{') return b=='}';
		return false;
	}
};