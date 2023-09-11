#include<stdio.h>
int main()
{
	float b,tier,hra,da,ta,gross;
	printf("Enter the tier");
	scanf("%f",&tier);
	if(tier==1)
	 {
	 printf("Enter the basic salary");
	 scanf("%f",&b);
	 hra=(24*b)/100;
	 da=(44*b)/100;
	 ta=(8*b)/100;
	 gross=b+hra+da+ta;
	 printf("%f",gross);}
	else
	{
	 printf("Enter the basic salary");
	 scanf("%f",&b);
	 hra=(16*b)/100;
	 da=(44*b)/100;
	 ta=(8*b)/100;
	 gross=b+hra+da+ta;
	 printf("%f",gross);
	}
}
