// Program to generate strong numbers in the given range

#include<stdio.h>
int main()
{
	int min,max;
	printf("Enter the minimum range: ");
	scanf("%d",&min);
	printf("Enter the maximum range: ");
	scanf("%d",&max);

	int i,j,fact,sum,temp,r;
	for(i=min;i<=max;i++){
		temp = i;
		sum=0;
		while(temp){
			j=1;
			fact=1;
			r=temp%10;
			while(j<=r){
				fact = fact*j;
				j++;
			}
			sum = sum+fact;
			temp = temp/10;
		}
		if(sum == i)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
