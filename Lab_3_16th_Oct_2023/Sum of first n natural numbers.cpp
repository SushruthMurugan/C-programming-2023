#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("The sum of the first n natural numbers is %d",sum);
}
