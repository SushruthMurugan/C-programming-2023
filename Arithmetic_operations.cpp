#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The sum of 2 numbers is %d",c);
	c=a-b;
	printf("The difference of 2 numbers is %d",c);
	c=a*b;
	printf("The product of 2 numbers is %d",c);
	c=a/b;
	printf("The division of 2 numbers is %d",c);
	return 0;
}
