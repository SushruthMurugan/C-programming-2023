#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter the marks of the 5 subjects");
	scanf("%d %d %d %d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("The percentage of the student is %d%%",f);
	return 0;
}
