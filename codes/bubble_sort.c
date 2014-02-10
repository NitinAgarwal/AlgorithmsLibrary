// Bubble sort algorithm O(n^2) runtime 

#include<stdio.h>
#define size 100

void bubblesort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}	
}

int main()
{
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int arr[size],i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	bubblesort(arr, n);
	
	printf("array after bubble sort\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

