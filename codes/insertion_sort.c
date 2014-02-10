// Insertion sort O(n^2) runtime 
#include<stdio.h>
#define size 100

void insertionsort(int a[], int n)
{
	int i,j;
	for(i=1;i<n;i++){
		int curr_element = a[i];
		j=i-1;
		while(j>=0 && a[j] > curr_element){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = curr_element;
	}	
}

int main()
{
	int n,arr[size],i;
	printf("enter the size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	insertionsort(arr,n);
	
	printf("after insertion sort\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
		

