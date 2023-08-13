#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int m,n;
    printf("enter two numbers: ");
    scanf("%d%d",&m,&n);
    printf("m=%d and n=%d\n",m,n);
    swap(&m,&n);
    printf("m=%d and n=%d",m,n);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}