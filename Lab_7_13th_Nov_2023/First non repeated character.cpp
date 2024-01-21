// first non repeated character of a string 

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,c=0,n;
	char a[100];
	printf("Enter the string ");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				c=1;
				j=n;
			}
			else
			{
				c=0;
			}
		}
		if(c==0)
		{
			printf("%c",a[i]);
			break;
		}
	}
	
	
}