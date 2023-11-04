#include<stdio.h>
int main()
{
	int m,n,e,f,l,k,i,j;
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[m][n],b[m][n],c[m][n];
	printf("Enter the value of the array A");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the value of the array B");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
				{
				c[i][j]+=a[i][k]*b[k][j];
				printf("\n%d",c[i][j]);
			}
		}
	}
	printf("The multiplication of the 2 matrices is ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n%d ",c[i][j]);
		}
	}
}
	
	