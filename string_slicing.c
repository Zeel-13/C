#include<stdio.h>
void slice(char str[],int m,int n);
int main()
{
    char str[100];
    int m,n;
    printf("enter a string: ");
    gets(str);
    printf("enter the interval: ");
    scanf("%d%d",&m,&n);
    slice(str,m,n);
}
void slice(char str[],int m,int n)
{
    char str1[100];
    int i,j=0;
    for(i=m;i<=n;i++,j++)
    {
        str1[j]=str[i];
    }
    str1[j]='\0';
    puts(str1);
}