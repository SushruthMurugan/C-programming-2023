#include<stdio.h>
int main()
{
int i,n,j,k,l,s,count;
printf("Enter the value of n");
scanf("%d",&n);
int a[n],b[n];
printf("Enter the values of the array a");
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
}
}
for(i=0;i<n;i=i+s)
{
	count=1;
	for(j=i+1;j<n;j++)
	{
	if(a[i]==a[j])
	{
		count=count+1;
		
	}
	
}
s=count;
printf("The count of the element is %d = %d",a[i],count);
}

}