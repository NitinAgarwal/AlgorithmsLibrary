// Program for decimal to binary coonversion

#include<stdio.h>
int main()
{
	long int dec_num, quot;
	int bin_num[101], i=1,j;
	printf("Enter the decimal number: ");
	scanf("%ld",&dec_num);
	quot = dec_num;
	while(quot != 0){
		bin_num[i++] = quot%2;
		quot = quot/2;
	}
	printf("Binary value is: ");
	for(j=i-1;j>0;j--)
		printf("%d",bin_num[j]);
	printf("\n");
	return 0;
}
		
		
