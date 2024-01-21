//pangram string
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n,c=0;
	char a[100],b[100];
	printf("Enter the string ");
	gets(a);
	n=strlen(a);
	strcpy(b,strlwr(a));
	for(i=97;i<=122;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[j]==i)
			{
				c=1;
				j=n;

			}
			
		}
	}
	if(c==0)
	{
		printf("It is not a pangram");
	}
	if(c==1)
	{
		printf("It is a pangram");
	}
	
}
