// Program to find the minimum of an array using pointers

#include<stdio.h>
int main()
{
	long arr[100], *min, size,i,index;
	printf("Enter the sie of the array\n");
	scanf("%ld",&size);
	for(i=0;i<size;i++)
		scanf("%ld",&arr[i]);
	
	min = arr;
	*min = *arr;
	
	for(i=1;i<size;i++){
		if(*(arr+i) < *min){
			*min = *(arr+i);
			index = i+1;
		}
	}
	printf("Min element is at %ld and its value is %ld\n",index, *min);
	return 0;
}
		
	
