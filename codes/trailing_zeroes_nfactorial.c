// program to find the number of trailing zeroes in n factorial
#include<stdio.h>
#include<math.h>

int cal_tzeroes(int n)
{
	int tzeroes=0,k=1,i;
	if(n<5)
		return tzeroes;
		
	while ((int)floor(pow(5, k+1)) < n)
		++k;
	
	for(i=1;i<=k;i++)
		tzeroes = tzeroes + floor((n / pow(5, i)));
	
	return tzeroes;
}

int main()
{
	int testcases,kk;
	scanf("%d",&testcases);
	int arr[testcases+1];
	for(kk=0;kk<testcases;kk++){
		int n;
//		printf("Enter the number:\n");
		scanf("%d",&n);
		
		arr[kk] = cal_tzeroes(n);
		printf("%d\n",arr[kk]);
	}
	return 0;	
}




