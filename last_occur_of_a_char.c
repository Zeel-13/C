//c program to find last occurance of a character in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100],ch;
    int len;
    printf("enter a string: ");
    gets(str);
    printf("enter the character to be searched: ");
    scanf("%c",&ch);
    len=strlen(str);
    strcpy(rev,str);
    strrev(rev);
    for(int i=0;rev[i]!='\0';i++)
    {
        if(rev[i]==ch)
        {
            printf("%c is found at position %d lastly",ch,len-i);
            break;
        }
    }
}