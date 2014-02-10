/* Program to check whether the given number is an armstrong number or not
	Eg : 0,1,153,320,371,407 */
	
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int temp,sum=0,rem;
	temp = n;
	while(temp != 0){
		rem = temp%10;
		sum = sum + rem*rem*rem;
		temp = temp/10;
	}
	if(n == sum)
		printf("Entered number is an armstrong number\n");
	else
		printf("Entered number is not an armstrong number\n");
	return 0;
}	
	
