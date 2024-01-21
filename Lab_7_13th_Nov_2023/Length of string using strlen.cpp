#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l=0,m,n,o;
	char a[100];
	printf("Enter the string");
	gets(a);
	for(i=0;i<100;i++)
	{
		if(a[i]!='\0')
		{
			l=l+1;
		}
		else
		{
			break;
		}

	}
	printf("The length of the string %d",l);
}