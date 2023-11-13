#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,x,m,count=0;
	char a[50];
	printf("Enter the string a");
	gets(a);
	x=strlen(a);
	for(i=0;i<x;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			printf("%c",a[i]);
			break;
		}
		
	}
}
