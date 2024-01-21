int gcd(int x,int y);
#include<stdio.h>
int main()
{
	int i,j,k,x,y;
	printf("Enter the values of x and y");
	scanf("%d %d",&x,&y);
	k=gcd(x,y);
	printf("The gcd of x and y is %d",k);
}
int gcd(int x,int y)
{
	if(y!=0)
	{
		return gcd(y,x%y);
	}
	else
	{
		return x;
	}
}