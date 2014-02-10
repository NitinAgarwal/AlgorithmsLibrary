// Program to print the pattern of stars

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	int temp = n;
	for(i=1;i<=n;i++){
		for(j=1;j<temp;j++)
			printf(" ");
		temp--;
		for(j=1;j<=2*i-1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
	
	
