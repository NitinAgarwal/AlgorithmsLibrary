#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("Random numbers in range 1 to 100\n");
	for(i=1;i<=100;i++){
		n = rand()%100 + 1;
		printf("%d\n",n);
	}
	return 0;
}
		
