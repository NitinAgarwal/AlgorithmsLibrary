// Program to print the string in reverse order
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ch;
	printf("Enter the string : ");
	scanf("%s",str);
	int len,i;
	len = strlen(str);
	for(i=0;i<len/2;i++){
		ch  = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = ch;
	}
	printf("Reverse string is: %s\n",str);
	return 0;
}


