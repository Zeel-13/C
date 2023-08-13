#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100],flag=0;
    printf("enter a string: ");
    gets(str);
    printf("original string is: %s\n",str);
    strcpy(rev,str);
    strrev(rev);
    printf("reversed string is: %s\n",rev);
    flag = strcmp(rev,str);
    if(flag==0)
    {
        printf("string is palindrome\n");
    }
    else{
        printf("string is not palindrome\n");
    }
}