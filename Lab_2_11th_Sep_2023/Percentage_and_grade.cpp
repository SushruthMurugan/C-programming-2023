#include<stdio.h>
int main()
{
	int p,c,b,m,comp,a;
	printf("Enter the marks in Physics,Chemistry,Biology,Maths,Computer");
	scanf("%d %d %d %d %d",&p,&c,&b,&m,&comp);
	a=(p+c+b+m+comp)/5;
	printf("The percentage is %d",a);
	if(a>=90)
	 printf("Grade A");
	else if(a>=80)
	 printf("Grade B");
	else if(a>=70)
	 printf("Grade C");
	else if(a>=60)
	 printf("Grade D");
	else if(a>=40)
	 printf("Grade E");
	else
	 printf("Grade F");
	return 0;
}
