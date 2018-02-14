//3_Permutations.cpp
/*
Permutations/排列
提供一组不同的数，返回是所有可能的组合
例子：[1,2,3]
[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

思路：插入法
只有1的时候：[1]
当加入2的时候：[2,1],[1,2]插入0，1的位置
当加入3的时候：[3,2,1],[2,3,1],[2,1,3],[3,1,2],[1,3,2],[1,2,3]
当3个permutation分别应对将3插入[2,1]的0,1,2位置
*/
class Solution{
public:
	vector<vector<int>> permute(vector<int>& num){
		vector<vector<int>> allPer;//for print the find nested collection
        
		if(num.empty()) return allPer;
        
		allPer.push_back(vector<int>(1,num[0]));

		for(int i=1; i<num.size(); i++){
			int n= allPer.size();
			for(int j=0; j<n; j++){
				for(int k=0; k<allPer[j].size(); k++){
					vector<int> per = allPer[j];
					per.insert(per.begin()+k, num[i]);
					allPer.push_back(per);
				}
				allPer[j].push_back(num[i]);
			}
		}
		return allPer;
	}
};