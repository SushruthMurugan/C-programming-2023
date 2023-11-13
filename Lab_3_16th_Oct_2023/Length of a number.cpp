#include<stdio.h>
int main()
{
	int len=0,i,j,k=0,m,n;
	printf("Enter the number n");
	scanf("%d",&n);
	while (n>0)
	{
		len=len+1;
		n=n/10;	
	}
	printf("The length of the number is %d",len);
}
