#include<stdio.h>
int main()
{
	int i,j,k,n,b,c,pos;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Enter the value to be inserted");
	scanf("%d",&b);
	printf("Enter the position for the value insertion");
	scanf("%d",&pos);
	
	for(i=n;i>pos-1;i--)
	{
		a[i]=a[i-1];
		
	}
	a[pos-1]=b;
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);	
	}
}