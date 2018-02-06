//14 arrays: a collection of items stored at continuous memory locations
// declare multiple items of same type together

#include<stdio.h>

int main(){
	int arr[5];
	arr[0]=5;
	arr[2]=-10;
	arr[3/2]=2; //this is same as arr[1]
	arr[3]=arr[0];
	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);

	for(int i = 0; i<5; i++){
		//%u unsigned interger
		printf("Address arr[%d] is %u\n", i, &arr[i]);
	}
	return 0;
}