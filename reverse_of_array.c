#include<stdio.h>
void reverse( int arr[],int n);
int main()
{
    int a[100],x,i;
    printf("enter the size of array: ");
    scanf("%d",&x);
    printf("enter the elements of array: ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,x);
}
void reverse( int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<(n/2);i++)
    {
        for(j=(n-i-1);j>=0;j--)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            break;
        }
    }
    printf("reverse array is:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}