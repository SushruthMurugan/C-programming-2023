#include<stdio.h>
#include<string.h>
int main()
{
	char a[500];
	int i,j,k,l,m;
	printf("Enter the string");
	gets(a);
	l=strlen(a);
	printf("Enter the character to be inserted");
	scanf("%c",&j);
	printf("Enter the position of insertion");
	scanf("%d",&k);
	a[k-1]=j;
	for(i=0;i<l;i++)
	{
		printf("%c",a[i]);
	}
}
	
