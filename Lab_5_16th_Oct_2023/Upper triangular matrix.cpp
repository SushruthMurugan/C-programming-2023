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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				b[i][j]=0;
			}
			else
			{
				b[i][j]=a[i][j];
			}
		}
	}
	printf("The upper triangular matrix is ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",b[i][j]);
		}
	}
}