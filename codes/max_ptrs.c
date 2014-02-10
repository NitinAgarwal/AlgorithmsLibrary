// Program to find the maximum of an array using pointers

#include<stdio.h>
int main()
{
	long arr[100], *max, size,i,index;
	printf("Enter the sie of the array\n");
	scanf("%ld",&size);
	for(i=0;i<size;i++)
		scanf("%ld",&arr[i]);
	
	max = arr;
	*max = *arr;
	
	for(i=1;i<size;i++){
		if(*(arr+i) > *max){
			*max = *(arr+i);
			index = i+1;
		}
	}
	printf("Max element is at %ld and its value is %ld\n",index, *max);
	return 0;
}
		
	
