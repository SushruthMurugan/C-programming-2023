#include<stdio.h>
int main()
{
	int b,c,d,e,f,n,i,j,k;
	printf("Enter the value of n ");
	scanf("%d",&n);
	int a[n-1];
	printf("Enter the values of the array ");
	for(i=0;i<n-1;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=0;i<n-2;i++)
		{	
			for(j=i+1;j<n-i-2;j++)
			{
				if (a[j]>a[j+1]);
				{
					b=a[j];
					a[j]=a[j+1];
					a[j+1]=b;
				}
			}
		}
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=i+1)
		{
			printf("%d",i+1);
			break;
		}	
	}
}
