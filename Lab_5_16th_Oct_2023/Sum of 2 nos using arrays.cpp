#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,number1,number2,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of m");
	scanf("%d",&m);
	int a[n],b[m];
	printf("Enter the values of array a");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the values of array b");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	number1=0;
	for(i=0;i<n;i++)
	{
		number1=number1+(a[i]*pow(10,n-i-1));
	}
	number2=0;
	for(i=0;i<m;i++)
	{
		number2=number2+(b[i]*pow(10,m-i-1));
	}
	printf("%d %d\n",number1,number2);
	printf("The sum of both numbers is %d",number1+number2);
	
}