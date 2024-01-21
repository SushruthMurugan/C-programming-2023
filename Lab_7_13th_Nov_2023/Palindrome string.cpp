#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m;
	char a[100],b[100];
	printf("Enter the string a ");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		b[i]=a[l-i-1];
	}
	b[i]='\0';
	puts(b);
	if(strcmp(a,b)==0)
	{
		printf("The string is a palindrome");
	}
	else
	{
		printf("The string is not a palindrome");
	}
}