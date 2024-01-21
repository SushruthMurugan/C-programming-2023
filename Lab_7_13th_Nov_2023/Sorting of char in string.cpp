// sort characters of string in ascending order 

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m;
	char a[100];
	printf("Enter the string");
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	printf("The string after sorting the characters is ");
	for(i=0;i<l;i++)
	{
		printf("%c",a[i]);
	}
}

