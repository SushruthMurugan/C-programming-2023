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
printf("Enter the value of s");
scanf("%d",&s);
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		for(k=j+1;k<n;k++)
	{
		if (a[i]+a[j]+a[k] == s)
			printf("%d %d %d \n",a[i],a[j],a[k]);
	}
	}	
}
}