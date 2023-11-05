#include<stdio.h>
int main()
{
	int i,j,k,p,q,r,s,l,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("*");
		}
		for(s=0;s<2*(n-i-1);s++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf("*");
		}
		for(s=0;s<2*(i+1);s++)
		{
			printf(" ");
		}
		for(j=0;j<n-i-1;j++)
		{
			printf("*");
		}
		printf("\n");\
	}
	
}