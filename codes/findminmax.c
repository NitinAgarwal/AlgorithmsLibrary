#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[100];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max=0;
	int min;
	int x,y;
	int element1,element2;
	int m=n/2;
	for(i=0;i<m;i++)
	{
		a[-1]=0;        
		element1 = a[2*i-1];
		element2 = a[2*i];
		if(element1<element2)
		{
			x=element1;
			y=element2;
		}
		else 
		{
			x=element2;
			y=element1;
		}
		if(x<min)
			min = x;
		if(max<y)
			max = y;
	}
	printf("min element is %d max element is %d\n",min,max);
	return 0;
}


