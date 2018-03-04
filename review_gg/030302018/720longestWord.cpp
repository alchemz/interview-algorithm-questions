//store the dictionay in HashTable
//Brute Force
class Solution{
public:
	string longestWord(vector<string>& words){

	}
}

//brute force+pruning
class Solution {
public:
    string longestWord(vector<string>& words) {
        string best;//the empty string
        unordered_set<string> dict(words.begin(), words.end());
        
        for(const string& word: words){
            //pruning
            if(word.length()<best.length()||(word.length()==best.length() && word>best))
                continue; //skip for checking
            string prefix;
            bool valid=true;
            for(int i=0; i<word.length()-1&&valid; ++i){
                prefix += word[i];
                if(!dict.count(prefix)) valid=false; //if the word is not in dictionary
            }
            if(valid) best=word; //if found, assign value to best
        }
        return best;
    }
};


