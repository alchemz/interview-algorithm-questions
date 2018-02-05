#include<stdio.h>
int main(){
	if(1)
	{
		label_1:printf("Hello");
		goto label_2;
	}
	else{
		goto label_1;
		label_2:printf("Geeks");
	}
	return 0;
}

//command: gcc -m32 hello.c -o hello
//compile 32-bit program on 64-bit gcc 
//sudo apt-get install g++-multilib