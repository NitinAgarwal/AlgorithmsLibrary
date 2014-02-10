// program to find perfect numbers in given range

#include<stdio.h>
int main()
{
	int min,max;
	printf("Enter the minimum range: ");
	scanf("%d",&min);
	printf("Enter the maximum range: ");
	scanf("%d",&max);
	
	int i,sum,j;
	for(i=min;i<=max;i++){
		j=1;
		sum=0;
		while(j<i){
			if(i%j == 0)
				sum = sum+j;
			j++;
		}
		if(sum == i)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
	
