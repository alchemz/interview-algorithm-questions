//letterCombinations.cpp
/*
Description:
Given a digit string, return all possible letter combinations that the number could represent.
A mapping of digit to letters (just like on the telephone buttons) is given below.

思路：
方法1：backtracking

和subset, combination问题一样的backtracking。唯一的区别是要先建立一个从数字到字母的转换表。这样每一层递归遍历当前digits[i]所对应的所有字母，并加入当前combination中传到下一层递归。
*/
//// Advanced Version, in place method.
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return vector<string>();
        vector<string> h = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res(1, "");
        for (int i=0; i<digits.size(); ++i) {
            string& str = h[digits[i]-'0'];
            int N = res.size();
            for (int j=0; j<N; ++j) {
                for (int k=1; k<str.size(); ++k) {
                    res.push_back(res[j]+str[k]);
                }
                res[j] += str[0];
            }
        }
        return res;
    }
};