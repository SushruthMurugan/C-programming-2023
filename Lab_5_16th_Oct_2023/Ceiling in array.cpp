#include<stdio.h>
int main()
{
	int i,j,k,n,b,c,x;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Enter the value of x");
	scanf("%d",&x);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(x>a[i] && x<a[i+1])
		{
			printf("The ceiling is %d",a[i+1]);
		}
	}
}