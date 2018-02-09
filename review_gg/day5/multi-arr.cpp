//multi-array
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int row=4, col=4;
	int arr[row][col], vec[row], product[row];
	int sum=0;

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d", arr[i][j]);
			cout<<arr[i][j]<<" ";
		}
	}

	for(int i=0; i<row; i++)
	{
		scanf("%d", vec[i]);
		cout<<vec[i]<<" ";
	}

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			sum +=arr[i][j] * vec[i];
		}

		product[i] = sum;
		sum=0;
	}

	for(int i=0; i<row; i++){
		cout<<product[i]<<" ";
	}
	return 0;
}