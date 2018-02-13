//count and say
/*
1： 1
2： 11
3： 21 
4： 1211 
5： 111221 
6： 
*/

class Solution{
public: 
	string countAndSay(int n){
		if(n<1) return "";
		string result = "1";
		for(int i=2; i<=n; i++){
			string temp ="";
			int count = 1;
			char prev = result[0];
            
			for(int j=1; j< result.size(); j++){
				if(result[j]==prev)
					count++;
				else{
					temp += '0'+count;
					temp.push_back(prev);
					count = 1;
					prev = result[j];
				}
			}
			temp += '0'+count;
            //temp+=to_string(count);
			temp.push_back(prev);
			result = temp;
		}
		return result;
	}
};