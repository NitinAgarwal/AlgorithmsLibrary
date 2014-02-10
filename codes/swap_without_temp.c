#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	b = (b+a) - (a=b);
	printf("the swapped numbers are a:%d b:%d\n",a,b);
	return 0;
}
