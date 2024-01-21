int f(int n,int a,int b,int c);
#include<stdio.h>
int main()
{
	int n,c,n1,n2,n3,a,b,s;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the values of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	c=f(n,a,b,c);
	printf("The value of the nth term is %d",c);
}
int f(int n,int a,int b,int c)
{
	int s;
	if(n==1)
	{
		n=a;
		return a;
	}
	if(n==2)
	{
		n=b;
		return b;
	}
	if(n==3)
	{
		n=c;
		return c;
	}
	else
	{
		s=f(n-1,a,b,c)+f(n-2,a,b,c)+f(n-3,a,b,c);
		return s;
	}
	
}