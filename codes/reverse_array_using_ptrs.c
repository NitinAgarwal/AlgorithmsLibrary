#include<stdio.h>
#include<stdlib.h>

void reverse_array(int *ptr, int n)
{
	int *s,i,j;
	s = (int*)malloc(sizeof(int) * n);
	if(s == NULL)
		return;
	for(i=n-1,j=0;i>=0;i--,j++)
		*(s+j) = *(ptr+i);
	for(i=0;i<n;i++)
		*(ptr+i) = *(s+i);
	free(s);
}		 

int main()
{
	int n,*ptr,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	ptr = (int*)malloc(sizeof(int) * n);
	if(ptr == NULL)
		return;
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
	
	reverse_array(ptr,n);
					
	for(i=0;i<n;i++)
		printf("%d\n",*(ptr+i));
	free(ptr);
	return 0;
}


