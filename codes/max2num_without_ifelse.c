#include<stdio.h>
int getmax(int a, int b)
{
	int c,k,max;
	c = a-b;
	k = (c >> 31) & 0X1;
	max = a - k*c;
	return max;
}
int main()
{
	int a,b;
	printf("Enter two numbers \n");
	scanf("%d %d",&a,&b);
	int res;
	res = getmax(a,b);
	printf("Max number is : %d\n",res);
	return 0;
}
 
