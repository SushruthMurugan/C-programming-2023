#include<stdio.h>
int main()
{
int i,n,j,k,l,s;
printf("Enter the value of n");
scanf("%d",&n);
int a[n];
printf("Enter the values of the array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			l=a[j];
			a[j]=a[j+1];
			a[j+1]=l;
		}
}}
for(i=0;i<n;i++)
	{
		if(a[i]==a[n/2+i])
			printf("%d",a[i]);	
	}
return 0;
}

