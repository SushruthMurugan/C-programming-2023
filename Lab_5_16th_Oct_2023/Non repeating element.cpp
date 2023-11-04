#include<stdio.h>
int main()
{
int i,n,j,k,l;
printf("Enter the value of n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if (a[i]!=a[j])
    {
    	printf("The non repeating element is %d",a[i]);
    }
}
}




