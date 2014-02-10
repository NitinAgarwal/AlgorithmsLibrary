// Program to check Perfect nunber

/* Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number */

#include<stdio.h>
int main()
{
	int num,i=1,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	while(i<num){
		if(num%i == 0)
			sum = sum + i;
		i++;
	}
	if (sum == num)
		printf("Entered number is a perfect number\n");
	else
		printf("Entered number is not a perfect number\n");
	return 0;
}

