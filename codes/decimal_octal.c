// Program to convert the decimal to octal
/* simple thing is to use the %o specifier in printf */

#include<stdio.h>
int main()
{
	long int dec_num, rem, quot;
	int oct_num[101],i=1,j;
	printf("Enter the decimal number: ");
	scanf("%ld",&dec_num);
	quot = dec_num;
	while(quot != 0){
		oct_num[i++] = quot%8;
		quot = quot/8;
	}
	printf("Octal conversion number is: ");
	for(j=i-1;j>0;j--)
		printf("%d",oct_num[j]);
	printf("\n");
	return 0;
}
 
  
