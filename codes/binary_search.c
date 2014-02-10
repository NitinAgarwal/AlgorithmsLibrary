// Binary Search algorithm O(log n) runtime given the input array is sorted
#include<stdio.h>
int binarysearch(int a[], int n, int key)
{
	int low=0, high=n-1,mid;
	while(low <= high){
		mid = low + (high-low)/2;
		if(a[mid] < key)
			low = mid+1;
		else if(a[mid] == key)
			return mid;
		else if(a[mid] > key)
			high = mid-1;
	}
	return -1;
}
int main()		
{
	int n,i;
	printf("enter the size of the array");
	scanf("%d",&n);
	int arr[n+1];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int key,index;
	scanf("%d",&key);
	index = binarysearch(arr, n, key);
	if(index == -1)
		printf("Element not found\n");
	else
		printf("Element is present at index %d\n",index);
	return 0;
}
	
	
