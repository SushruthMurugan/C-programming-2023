#include<stdio.h>
int main()
{
int i,n,j,k,l;
printf("Enter the value of n");
scanf("%d",&n);
int a[n];
printf("Enter the values of the array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the value of k");
scanf("%d",&k);
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if (a[i]+a[j] == k)
			printf("%d %d \n",a[i],a[j]);
	}
}
}