//removing char in string 1 that are present in string 2
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m;
	char a[100],b[100];
	printf("Enter string 1");
	gets(a);
	printf("Enter string 2");
	gets(b);
	l=strlen(a);
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[j]==b[i])
			{
				for(k=j;k<l;k++)
				{
					a[k]=a[k+1];
				}
				l--;
			}
		}
	}
	printf("The updated string 1 is ");
	printf("%s",a);
	
	
}