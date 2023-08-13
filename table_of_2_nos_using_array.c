#include<stdio.h>
int main()
{
    int table[2][10],i,n,m;
    printf("enter two numbers: ");
    scanf("%d%d",&n,&m);
    for(i=0;i<10;i++)
    {
        table[0][i]=n*(i+1);
    }
    for(i=0;i<10;i++)
    {
        table[1][i]=m*(i+1);
    }
    printf("table of %d is:\n",n);
    for(i=0;i<10;i++)
    {
       printf("%d\t",table[0][i]);
    }
    printf("\n");
    printf("table of %d is:\n",m);
    for(i=0;i<10;i++)
    {
       printf("%d\t",table[1][i]);
    }
}