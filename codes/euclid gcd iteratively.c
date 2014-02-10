#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d %d",&a,&b);
	if(a==0 || b==0)
	{
		printf("gcd of two numbers is 0");
		return 0;
	}
	while(a%b != 0)
	{
		temp = b;
		b = a%b;
		a = temp;
	}
	printf("gcd of two numbers is %d",b);
	return 0;
}
