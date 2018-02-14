//5_rotateImage.cpp
/*
题目：提供一组n*n 2D矩阵代表一张图片
旋转图片意思是修改2D矩阵，不能分配另外一个矩阵去解题

举例：
Given input matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],
rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
等于是
i-row, j=col,
[i,j]->[i, j+(col-1)]:
[0,0]->[0,2]
[0,1]->[1,2]
*/

class Solution{
public:
	void rotate(vector<vector<int>>& matrix){
        //start with[0,0], end with [2,2]
        //matrix[col][row]
        //[0,0]->[2-0,0]
		int start =0, end = matrix.size()-1;
        
		while(start < end){
			for(int i=start; i<end; i++){
				int offset = i - start;
				int temp = matrix[start][i];
				matrix[start][i] = matrix[end-offset][start];
				matrix[end-offset][start]=matrix[end][end-offset];
				matrix[end][end-offset]=matrix[start+offset][end];
				matrix[start+offset][end]=temp;
			}
			start++;
			end--;
		}
	}
};