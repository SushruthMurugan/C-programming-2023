#include<stdio.h>
int main()
{
int i,n,j,k,l,s,q=0;
printf("Enter the value of n ");
scanf("%d",&n);
int a[n+1];
printf("Enter the values of the array a ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the new value to be inserted ");
scanf("%d",&k);
a[n]=k;
printf("The new array is ");
for(i=0;i<n;i++)
{
	for(j=0;j<n-i;j++)
	{
		if(a[j]>a[j+1])
		{
		l=a[j];
		a[j]=a[j+1];
		a[j+1]=l;
			
		}
	
	}
	
}
for(i=0;i<n+1;i++)
{
	printf("%d ",a[i]);
}
}
