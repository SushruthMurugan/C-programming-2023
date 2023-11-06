#include<stdio.h>
int main()
{
	int b,c,d,e,f,n,i,j,k;
	printf("Enter the value of n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array ");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			 printf("%d ",a[i]);
		}
	}
}
