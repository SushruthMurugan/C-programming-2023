#include<stdio.h>
int main()
{
	int km,m,cm,mm;
	printf("Enter the value in kilometers");
	scanf("%d",&km);
	m=km*1000;
	printf("The value in meters is %d",m);
	cm=m*100;
	printf("The value in centimeters is %d",cm);
	mm=cm*10;
	printf("The value in millimeteres is %d",mm);
	return 0;
}
