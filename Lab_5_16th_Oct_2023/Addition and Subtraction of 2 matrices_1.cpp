#include<stdio.h>
int main()
{
	int m,n,e,f,l,k,i,j;
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[m][n],b[m][n],c[m][n],d[m][n];
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
	printf("The addition and subtraction of the 2 matrices is ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[i][j]-b[i][j];
			printf("\n%d ",c[i][j]);
			printf("\n%d ",d[i][j]);
		}
	}
}

	
	
	
