// Program to calculate power of a number

#include<stdio.h>
int main()
{
	int num,pow;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Enter the power: ");
	scanf("%d",&pow);
	int i=1;
	long int sum=1;
	while(i<=pow){
		sum = sum*num;
		i++;
	}
	printf("%ld\n",sum);
	return 0;
}

