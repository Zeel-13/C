#include<stdio.h>
int main()
{
    int a[100],n,i,x;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the original array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter the element to be inserted at the end: ");
    scanf("%d",&x);
    a[n]=x;
    printf("\nthe modified array is: ");
    for(i=0;i<n+1;i++)
    {
        printf("%d\t",a[i]);
    }
}
