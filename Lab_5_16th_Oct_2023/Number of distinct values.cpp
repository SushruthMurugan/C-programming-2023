#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n,count=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		b[i]=abs(a[i]);	
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				k=b[j];
				b[j]=b[j+1];
				b[j+1]=k;
			}
		}
	}
	
	for(i=0;i<n-1;i++)
	{
		if (b[i]!=b[i+1])
			{
				count+=1;
			}
	}
	printf("The number of distinct values is %d",count);
}
	
	
	
	
	
	
	