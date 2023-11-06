#include<stdio.h>
int main()
{
	int b,c,d,e,f,n,i,j,k;
	printf("Enter the value of n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array ");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if (a[j]>a[j+1])
				{
					b=a[j];
					a[j]=a[j+1];
					a[j+1]=b;
				}
			}
			
		}
	printf("Enter the value of k ");
	scanf("%d",&k);
	printf("The kth smallest value is %d", a[k-1]);
	printf("\nThe kth largest value is %d", a[n-k]);
}
