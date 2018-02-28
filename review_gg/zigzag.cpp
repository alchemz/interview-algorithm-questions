//zigzag conversion
/*
Description: 
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:
string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
*/
/*
思路：找规律。
P   A   H   N
A P L S I I G
Y   I   R
n=3----------------
0   4   8   12
1 3 5 7 9 11 13
2   6   10
n=5----------------
0         8              16
1       7 9           15 17
2    6   10      14      18 
3  5     11  13          19
4        12              20 
所以对于第i行(i = 0, ... n-1)：
d1 = (n-i-1)*2, d2 = i*2
x0 = i
x1 = x0 + d1
x2 = x1 + d2 
x3 = x2 + d1
x4 = x3 + d2
*/
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <2) return s;//there is no case for rows <2
        string result;
        int inc = (numRows - 1)*2;////每次轴增加的步长
        
        for(int i=0; i<numRows; i++){
            int j=i, d1=(numRows - i -1)*2;
            while(j<s.size()){
                result.push_back(s[j]);
                if(d1 !=0 && d1 !=inc && j+d1 < s.size())
                    result.push_back(s[j+d1]);
                j += inc;
            }
        }
        return result;
    }
};