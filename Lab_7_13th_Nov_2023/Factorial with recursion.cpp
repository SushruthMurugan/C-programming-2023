int fact(int n);
#include<stdio.h>
int main()
{
	int i,k,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	k=fact(n);
	printf("The factorial is %d",k);
}
int fact(int n)
{
	int c;
	if(n==0)
	{
		return 1;
	}
	else
	{
		c=n*fact(n-1);
		return c;
	}
}