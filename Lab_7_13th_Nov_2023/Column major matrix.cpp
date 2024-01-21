//printing column major matrix
#include<stdio.h>
int main()
{
	int i,j,k=1,l,m,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			a[i][j]=k++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}