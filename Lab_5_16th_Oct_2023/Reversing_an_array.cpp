#include<stdio.h>
int main()
{
	int b,c,d,e,f,n,i,j;
	printf("Enter the value of n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array ");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	if(n%2==0)
	{
		for(i=0;i<n/2;i++)
		{
			b=a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=b;
		}
	}
	else
	{
		for(i=0;i<(n-1)/2;i++)
		{
			c=a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=c;
		}
	} 
	

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
