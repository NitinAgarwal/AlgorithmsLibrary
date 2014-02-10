// Program to subtract two numbers without using subtraction operator

#include<stdio.h>
int main()
{
	int a,b,res;
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);
	res = a + ~b + 1;
	printf("%d\n",res);
	return 0;
}
