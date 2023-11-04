#include<stdio.h>
int main()
{
	int n,i,j,k,l,m,x,count;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	printf("Enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value of x");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==(a[i]+x)/2)
			{
				count=count+1;
			}
		}
		b[i]=count;
		count=0;
		
	}
	printf("The array b is ");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}

}