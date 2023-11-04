#include<stdio.h>
int main()
{
	int m,n,e,f,l,k,i,j,c,d;
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the values of the array");
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
			if(i==j)
			{
				if(a[i][j]==1)
				{
					c=1;
				}
				else
				{
					c=0;
				}
				
			}
			else
			{
				if(a[i][j]==0)
				{
					d=1;
				}
				else
				{
					d=0;
				}
			}
		}
	}
	if(c==1 && d==1)
	{
		printf("The matrix is an identity matrix");
	}
}