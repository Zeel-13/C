//program to replace lowercase letters with uppercase letters and vice-versa in a string 
#include<stdio.h>
int main()
{
    char str[100];
    printf("enter a string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    puts(str);
}