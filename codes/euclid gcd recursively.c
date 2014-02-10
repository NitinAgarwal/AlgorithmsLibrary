#include<stdio.h>
int gcd(int a,int b)
{
	if(a==0 || b==0)
	{
		//printf("gcd is 0\n");
		return 0;
	}
	if(a%b == 0)
		return b;
	gcd(b,a%b);			
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",gcd(a,b));
	return 0;
}
