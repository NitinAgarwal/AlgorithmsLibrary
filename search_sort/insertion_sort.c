
/* Insertion Sort : Sort an arra of size n

Algorithm : Loop from 0 to n-1 and then pick arr[i] element and insert it
into sorted sequence arr[0..i-1]

Time Complexity : O(n*n)
Auxiliary Space : O(1)

*/

#include <stdio.h>
#include <math.h>

// Function to sort an array using Insertion Sort

void insertionSort(int arr[], int n)
{
	int i,j,key;
	for(i=1; i<n; i++){
		key = arr[i];
		j = i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

int main()
{
	int n, i;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	insertionSort(arr, n);
	
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
			
	printf("\n");
	return 0;
}


	

