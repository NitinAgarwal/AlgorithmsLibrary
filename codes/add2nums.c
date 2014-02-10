#include<stdio.h>

int add(int m, int n)
{
	int x,y;
	if(!m)
		return n;
	x = m & n;
	x = x << 1;
	y = m ^ n;
	return add(x,y);
}
int main()
{
	int a,b;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	int res;
	res = add(a,b);
	printf("result : %d\n",res);
	return 0;
}
