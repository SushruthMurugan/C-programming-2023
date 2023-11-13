#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int k,i,j,l,m;
	printf("Enter the string");
	gets(a);
	printf("Enter the character");
	scanf("%c",&k);
	for(i=0;i<100;i++)
	{
		if (a[i]==k)
		{
			printf("The first occurence of the character is at position number %d",i);
			break;
		}
	}
}
