// Program to check whether given number is strong or not

/* A number is called strong number if sum of the factorial of its digit is equal to number itself. */

#include<stdio.h>
int main()
{
	int num,temp,i,fact,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	temp = num;
	while(num){
		i=1;
		fact=1;
		r = num%10;
		while(i<=r){
			fact = fact *i;
			i++;
		}
		sum = sum+fact;
		num = num/10;
	}
	if (sum == temp)
		printf("Entered number is a strong number\n");
	else
		printf("Entered number is not a strong number\n");
	return 0;
}
	
