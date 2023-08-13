#include<stdio.h>
int main()
{
    int arr[100],n,x,freq=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to check frequency: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            freq=freq+1;
        }
    }
    printf("%d occurs %d times in array",x,freq);
}