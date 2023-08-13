#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d is not a prime number",n);
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("%d is a prime number",n);
		}	
	
	
}