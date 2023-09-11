#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of the three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	 printf("The numbers are equal");
	else
	 printf("The numbers are not equal");
	return 0;
}
