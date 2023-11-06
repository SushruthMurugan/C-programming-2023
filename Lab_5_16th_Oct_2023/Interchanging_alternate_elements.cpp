#include<stdio.h>
int main()
{
	int b,c,d,e,f,n,i,j;
	printf("Enter the value of n (even) ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array ");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=0;i<(n/2);i++)
	{
		j=2*i;
		b=a[j];
		a[j]=a[j+1];
		a[j+1]=b;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
