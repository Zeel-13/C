#include<stdio.h>
int count(int arr[], int n);
int main()
{
	int a[100],i,x;
	printf("enter the size of array: ");
	scanf("%d",&x);
	printf("enter the elements of array: ");
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("there are %d odd nos. in the array",count(a,x));
}
int count(int arr[], int n)
{
	int j,c=0;
	for(j=0;j<n;j++)
	{
		if(arr[j]%2!=0)
		{
			c=c+1;
		}		
	}
	return c;
}
