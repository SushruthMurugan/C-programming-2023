#include<stdio.h>
int main()
{
	int n,m,number1,number2,i,j,k,c;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of array a");
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
			if((a[i]+a[j])%k==0)
			{
				c=1;
			}
			else
			{
				c=0;
				break;
			}
		}
	}
	if(c==1)
	{
		printf("True");
	}
	if(c==0)
	{
		printf("False");
	}
}