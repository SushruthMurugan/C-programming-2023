int gt(int n);
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the values of a");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=gt(n);

}
int gt(int n)
{
	int max=0,l,m,a[n],i;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The maximum element is %d",max);
	
}