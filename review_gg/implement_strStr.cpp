//implement strStr()
/*
Description:
Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Example:
Input: haystack = "hello", needle = "ll"
Output: 2
Input: haystack = "aaaaa", needle = "bba"
Output: -1
*/
/*
Thoughts:
*/
class Solution{
public:
	int strStr(string haystack, string needle){
        //if the two strings are NULL
		if(haystack.empty() && needle.empty())
			return 0;
        //if the haystack string is empty, no occurance, return -1
		if(haystack.empty()) return -1;
        //if no needle inputted, return 0;
		if(needle.empty()) return 0;
        //if no occurance found, return -1;
		if(haystack.size() <needle.size()) return -1;
        //iterates through all letters
		for(int i=0; i<haystack.size() - needle.size() +1; i++){
			string::size_type j;
            //use string type of j
			for(j=0; j<needle.size(); j++){
                //if occurance found
				if(haystack[i+j] != needle[j]) break;
			}
			if(j==needle.size()) return i;
		}
		return -1;
	}
};