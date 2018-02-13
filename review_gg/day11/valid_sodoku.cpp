//valid sudoku
/*
Description: determind if a sudoku is valid
The Sudoku board could be partially filled, where empty cells are filled with the character '.'.
*/
/*
思路：
rules-each row must have the numbers 1-9 occuring just once
rules-each column must have the numbers 1-9 occuring just once
rules-each numbers 1-9 must occur once in each of the 9 sub-boxes
*/
class Solution
{
public:
	bool isValidSudoku(vector<vector<char>>& board)
	{
		if(board.size() !=9 || board[0].size() !=9) return false;

		//check row
		for(int i=0; i<9; i++){
			vector<bool> verified(9, false);
			for(int j=0; j<9; j++){
				if(!isdigit(board[i][j])) continue;
				int k = board[i][j]-'0';
				if(k==0||verified[k-1]) return false;
				verified[k-1]=true;
			}
		}
		//check col
		for(int j=0; j<9; j++){
			vector<bool> verified(9, false);
			for(int i=0; i<9; i++){
				if(!isdigit(board[i][j])) continue;
				int k = board[i][j]-'0';
				if(k==0||verified[k-1]) return false;
				verified[k-1] = true;
			}
		}
		//check subbox
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				int row = 3*i;
				int col = 3*j;
				vector<bool> verified(9, false);
				for(int m=row; m<row+3; m++){
					for(int n=col; n<col+3; n++){
						if(!isdigit(board[m][n])) continue;
						int k = board[m][n]-'0';
						if(k==0||verified[k-1]) return false;
						verified[k-1]=true;
					}
				}
			}
		}
		return true;
	}
};

//sample 15 ms submission
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool> used(9);
        for (int i = 0; i < 9; i++) {
            fill(used.begin(), used.end(), false);
            for (int j = 0; j < 9; j++)
                if (!check(board[i][j], used))
                    return false;
            fill(used.begin(), used.end(), false);
            for (int k = 0; k < 9; k++)
                if (!check(board[k][i], used))
                    return false;
        }
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                fill(used.begin(), used.end(), false);
                for (int i = r * 3; i < r * 3 + 3; i++)
                    for (int j = c * 3; j < c * 3 + 3; j++) 
                        if (!check(board[i][j], used))
                            return false;
            }
        }
        return true;
    }
    
private:
    bool check(char ch, vector<bool>& used) {
        if (ch == '.') return true;
        if (used[ch - '1']) return false;
        return used[ch - '1'] = true;
    }
};