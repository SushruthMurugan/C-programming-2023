#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,l,m,n,len,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	while (n>0)
	{
		len=len+1;
		n=n/10;	
	}
	int reverse=0;
	while(n>0)
	{
		k=n%10;
		n=n/10;
		reverse=reverse+(k*pow(10,len-i-1));
	}
	printf("The reverse of the number is %d",reverse);
}
