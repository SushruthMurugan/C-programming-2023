#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	 printf("Triangle is equilateral");
	else if(a!=b && b!=c && c!=a)
	 printf("Triangle is scalene");
	else
	printf("Triangle is isosceles");
	return 0;	
}
