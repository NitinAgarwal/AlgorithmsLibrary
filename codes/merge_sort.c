
/* Merge Sort an O(n logn) comparison-based sorting algorithm */ 
#include<stdio.h>
#include<stdlib.h>
#define size 100

void mergesort(int a[], int low, int high)
{
	int mid = low + (high-low)/2;
	if(low == high)	// base case condition
		return;
	if(low<high){
		mergesort(a, low, mid);
		mergesort(a, mid+1, high);
		merge(a,low,mid,high);
    }
}

// merge function merges the two sorted parts
void merge(int a[], int low, int mid, int high)
{
	// need a temporary array to store the new sorted pair
	int temp[high-low+1];
	int pos=0, left_pos=low, right_pos=mid+1;
	while(left_pos <= mid && right_pos <= high){
		if(a[left_pos] < a[right_pos])
			temp[pos++] = a[left_pos++];
		else 
			temp[pos++] = a[right_pos++];
	}
	while(left_pos <= mid)
		temp[pos++] = a[left_pos++];
	while(right_pos <= high)
		temp[pos++] = a[right_pos++];
	int i;
	// copy the sorted array to the original array
	for(i=0;i<pos;i++)
		a[i+low] = temp[i];
	return;
}			 

int main()
{
	int arr[size],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	mergesort(arr,0,n-1);
	
	printf("Array after mergesort\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}	

