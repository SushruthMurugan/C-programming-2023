#include<stdio.h>
int main()
{
	int i,j,k;
	char a[50];
	printf("Enter the string a");
	gets(a);
	for(i=0;i<50;i++)
	{
		if (a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("The string in lowercase is %s",a);

}
