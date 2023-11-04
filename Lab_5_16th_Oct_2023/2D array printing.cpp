#include<stdio.h>
int main()
{
	int m,n,e,f,l,k,i,j;
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the value of the array");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The values of the array");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
	}
}