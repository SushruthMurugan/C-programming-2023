#include<stdio.h>
int main()
{
	int i,j,k=1,p,q,r,s,l,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<(n+1)/2;i++)
	{
		for(p=i;p<n-i;p++)
		{
			a[i][p]=k++;
		}
		for(q=i+1;q<n-i;q++)
		{
			a[q][n-i-1]=k++;
		}
		for(r=n-i-2;r>=i;r--)
		{
			a[n-i-1][r]=k++;
		}
		for(s=n-i-2;s>i;s--)
		{
			a[s][i]=k++;
		}
	}
	printf("The matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	
	}	
}