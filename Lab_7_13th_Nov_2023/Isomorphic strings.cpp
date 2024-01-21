//isomorphic strings
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,d,n1,n2,c=1;
	char a[100],b[100];
	printf("Enter string 1");
	gets(a);
	printf("Enter string 2");
	gets(b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1!=n2)
	{
		printf("Not isomorphic");
	}
	else
	{
		for(i=0;i<n1;i++)
		{
			d=a[i]-b[i];
			for(j=i+1;j<n1;j++)
			{
				if(a[j]==a[i])
				{
					if(a[j]-b[j]!=d)
					{
						c=0;
						printf("Not isomorphic");
						j=n1;
						i=n1;
					}
				}
			}
		}
		
	}
	if(c==1)
	{
		printf("The strings are isomorphic");
	}
	
	
	
}
