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
		if(a[i]==' ')
		{
			count=count+1;
		}
	}
	printf("The number of words in the string is %d",count);
	
}
