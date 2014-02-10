// program to print from 1 to 100 without using for loop

#include<stdio.h>

int print(num)
{
	if(num <= 100){
		printf("%d ",num);
		print(num+1);
	}
}
	
int main()
{
	int num=1;
	print(num);
	printf("\n");
	return 0;
}

