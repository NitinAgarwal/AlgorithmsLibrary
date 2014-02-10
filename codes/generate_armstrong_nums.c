// Program to generate armstrong numbers 

#include<stdio.h>

int main()
{
	long num,sum=0,temp,i;
	int rem;
	printf("Enter the maximum range upto which we want to generate armstrong numbers\n");
	scanf("ld",&num);
	printf("Armstrong numbers are :\n");
	printf("0\n");
	
	for(i=1;i<=num;i++){
		temp = i;
		while(temp != 0){
			rem = temp%10;
			sum = sum + rem*rem*rem;
			temp = temp/10;
		}
		if(i == sum)
			printf("%ld\n",i);
		sum = 0;
	}
	return 0;
}

	
	
