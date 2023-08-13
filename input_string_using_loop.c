#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    printf("enter a string: ");
    for(int i=0;ch!='\n';i++)
    {
        scanf("%c",&ch);
        str[i]=ch;
    }
    puts(str);
}