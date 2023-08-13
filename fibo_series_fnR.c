#include<stdio.h>
void fibo(int a,int b,int c);
int main()
{
	int p=0,q=1,r;
	printf("enter no. of terms: ");
	scanf("%d",&r);
	printf("%d\n",p);
	printf("%d\n",q);
	fibo(p,q,r-2);
}
void fibo(int a,int b,int c)
{
	int d;
	if(c>0)
	{
		d=a+b;
		printf("%d\n",d);
		a=b;
		b=d;
		fibo(a,b,c-1);
	}
}