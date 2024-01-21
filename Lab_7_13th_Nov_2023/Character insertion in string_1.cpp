#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,p;
	char a[100],m;
	printf("Enter the string ");
	gets(a);
	l=strlen(a);
	printf("Enter the character to be inserted ");
	scanf("%c",&m);
	printf("Enter the position of insertion ");
	scanf("%d",&p);
	for(i=l;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}	
	a[p-1]=m;
	printf("The string after insertion is");
	puts(a);
	return 0;
}
