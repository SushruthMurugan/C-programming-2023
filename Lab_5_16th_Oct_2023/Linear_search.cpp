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
	b=0;
	printf("Enter the value of k ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
		{
		if (a[i]==k)
			b=b+1;
		}
	printf("The occurence of the number k is %d",b);
}
