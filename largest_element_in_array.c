#include<stdio.h>
int main()
{
    int a[100],n,max;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("largest element in array is %d",max);
}