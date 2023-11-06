#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[50],b[50];
	printf("Enter the string ");
	gets(a);
	for(i=0;i<50;i++)
	{
		b[i]=a[i];
	}
	
	printf("The string after copying is %s",b);

}
