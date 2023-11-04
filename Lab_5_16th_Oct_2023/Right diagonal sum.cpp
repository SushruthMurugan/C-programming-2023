#include<stdio.h>
int main()
{
	int m,n,e,f,l,k,i,j,sum;
	printf("Enter the value of m [rows]");
	scanf("%d",&m);
	int a[m][m];
	printf("Enter the value of the array A");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=0;
	for(i=0;i<m;i++)
	{
		sum=sum+a[i][m-i-1];	
	}
	printf("The sum of the right diagonal is %d",sum);
}