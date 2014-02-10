#include<stdio.h>
int binary(int a[],int key,int low,int high);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int key;
	scanf("%d",&key);
	int res;
	res = binary(a,key,0,n-1);
	if (res==-1)
		printf("key not found");
	else
		printf("%d",res);
	return 0;

}
int binary(int a[],int key,int low,int high)
{
	int mid;
	mid = low + (high-low)/2;
	if (a[mid]<key)
		binary(a,key,mid+1,high);
	else if (a[mid]>key)
		binary(a,key,low,mid-1);
	else 
		return mid;
}

