int f(int n);
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	f(n);	
}
int f(int n)
{
	int i,sum=0,avg;
	int a[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	a[n]=avg;
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
}