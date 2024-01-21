#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n;
	char a[100];
	printf("Enter the string");
	gets(a);
	l=strlen(a);
	if(l%2==0)
	{
		for(i=0;i<l/2;i++)
		{
			m=a[i];
			a[i]=a[l-i-1];
			a[l-i-1]=m;
		}
	}
	else
	{
		for(i=0;i<(l-1)/2;i++)
		{
			n=a[i];
			a[i]=a[l-i-1];
			a[l-i-1]=n;
		}
	}
	printf("The reversed string is ");
	puts(a);
}