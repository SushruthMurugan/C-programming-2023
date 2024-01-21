//anagram string
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,al,bl,m,n;
	char a[100],b[100];
	printf("Enter the string a");
	gets(a);
	printf("Enter the string b");
	gets(b);
	al=strlen(a);
	bl=strlen(b);
	for(i=0;i<al-1;i++)
	{
		for(j=0;j<al-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}

		}
	}
	for(i=0;i<bl-1;i++)
	{
		for(j=0;j<bl-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				n=b[j];
				b[j]=b[j+1];
				b[j+1]=n;
			}

		}
	}
	if(strcmp(a,b)==0)
	{
		printf("The strings are anagrams");
	}
	else
	{
		printf("The strings are not anagrams");
	}
	
	
		
}