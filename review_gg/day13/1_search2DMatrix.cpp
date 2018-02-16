//1_search2DMatrix.cpp
/*
Question:
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

Example:
[
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
Given 3, return true;
*/
class Solution{
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target){
		//corner cases
		if(matrix.size()==0)
			return false;
		if(matrix[0].size()==0)
			return false;

		int rowNumber =0;
		int colNumber =matrix[0].size()-1;
		while(rowNumber<matrix.size() && colNumber>=0)
		{
			if(target<matrix[rowNumber][colNumber])
				--colNumber;
			else if(target>matrix[rowNumber][colNumber]){
				if(colNumber==matrix[rowNumber].size()-1)
					++rowNumber;
				else
					return false;
			}
			else
				return true;
		}
		return false;
	}
};