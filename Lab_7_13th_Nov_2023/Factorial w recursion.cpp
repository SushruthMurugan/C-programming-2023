int fact(int n);
#include<stdio.h>
int main()
{
	int n,c;
	printf("Enter the value of n");
	scanf("%d",&n);	
	c=fact(n);
	printf("The factorial is %d",c);
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}