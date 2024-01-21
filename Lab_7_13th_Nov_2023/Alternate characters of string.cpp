//alternate characters are same
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,c=1;
	char a[100];
	printf("Enter the string");
	gets(a);
	l=strlen(a);
	k=a[0];
	m=a[1];
	for(i=2;i<l;i=i+2)
	{
		if(a[i]!=k)
		{
			c=0;
			i=l;
		}
	}
	for(i=3;i<l;i=i+2)
	{
		if(a[i]!=m)
		{
			c=0;
			i=l;
		}
	}
	if(c==0)
	{
		printf("Alternate characters are not same");
	}
	if(c==1)
	{
		printf("Alternate characters are the same");
	}
	
}