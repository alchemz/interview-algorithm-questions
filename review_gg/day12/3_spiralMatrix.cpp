//3_spiralMatrix.cpp
/*
题目：
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
Example:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
You should return [1,2,3,6,9,8,7,4,5].
*/
class Solution{
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix){
		vector<int> result;
		if(matrix.empty() || matrix[0].empty()) return result;
        
		int m = matrix.size(), n=matrix[0].size();
        
		int nlvl = (min(m,n)+1)/2;
        
		for(int i=0; i<nlvl; i++){
			int lastRow = m-1-i;
			int lastCol = n-1-i;
            
			if(lastRow==i)
			{
				for(int j=i; j<=lastCol; j++)
					result.push_back(matrix[i][j]);
			}
			else if(lastCol==i)
			{
				for(int j=i; j<=lastRow; j++)
					result.push_back(matrix[j][i]);
			}
			else
			{
				for(int j=i; j<lastCol; j++)
					result.push_back(matrix[i][j]);
                
				for(int j=i; j<lastRow; j++)
					result.push_back(matrix[j][lastCol]);
                
				for(int j=lastCol; j>i; j--)
					result.push_back(matrix[lastRow][j]);
                
				for(int j=lastRow; j>i; j--)
					result.push_back(matrix[j][i]);
			}
		}
		return result;
				
	 }
	
};