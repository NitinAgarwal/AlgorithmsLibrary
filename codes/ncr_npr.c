// Program to find the value of nCr and nPr using function

#include<stdio.h>

long fact(int n)
{
	int i;
	long res =1;
	for(i=1;i<=n;i++)
		res = res*i;
	return res;
}

long find_ncr(int n, int r)
{
	long res;
	res = fact(n)/(fact(r)*fact(n-r));
	return res;
}

long find_npr(int n, int r)
{
	long res;
	res = fact(n)/fact(n-r);
	return res;
}

int main()
{
	int n,r;
	long ncr, npr;
	printf("Enter the value of n and r\n");
	scanf("%d %d",&n,&r);
	
	ncr = find_ncr(n,r);
	npr = find_npr(n,r);
	
	printf("value of ncr is %ld\n",ncr);
	printf("value of npr is %ld\n",npr);
	return 0;
}


