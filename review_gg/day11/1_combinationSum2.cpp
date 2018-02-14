//1_combinationSum2.cpp
//with duplicates, can only be used once
class Solution{
public:
	vector<vector<int>> combinationSum2(vector<int> &candidates, int target){
		vector<vector<int>> allSol;
		if(candidates.empty()) return allSol;
		sort(candidates.begin(), candidates.end());
		vector<int> sol;
		findCombSum2(candidates,0, target, sol, allSol);
		return allSol;
	}

	void findCombSum2(vector<int> &candidates, int start, int target, vector<int> &sol, vector<vector<int>> &allSol){
		if(target==0){
			allSol.push_back(sol);
			return;
		}
		for(int i=start; i<candidates.size(); i++){
			if(i>start && candidates[i]==candidates[i-1]) continue;
			if(candidates[i]<=target){
				sol.push_back(candidates[i]);
				findCombSum2(candidates, i+1, target-candidates[i], sol, allSol);
				sol.pop_back();
			}
		}
	}
};