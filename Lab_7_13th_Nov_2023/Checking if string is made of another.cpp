#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n,c=0,d=1;

	char a[100],b[100];
	printf("Enter string 1");
	gets(a);
	m=strlen(a);
	printf("Enter string 2");
	gets(b);
	n=strlen(b);

	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{
				c++;
			}
		}
		if(c==0)
		{
			printf("The string is not found in original string");
			d=0;
			break;
		}
	}
	if(d!=0)
	{
		printf("The string is found in original string");
	}

	

	
		
}