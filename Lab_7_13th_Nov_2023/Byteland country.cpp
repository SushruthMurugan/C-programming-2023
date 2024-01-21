//byteland country ascii values
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,count,c=1;
	char a[100];
	printf("Enter string 1");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		count=1;
		for(j=i+1;j<l;j++)
		{
			if(a[j]==a[i])
			{
				count=count+1;
			}
			
		}
		if(count!=a[i]-96)
		{
			c=0;
			printf("No");
			break;
		}
		for(j=i+1;j<l;j++)
		{
			for(k=j;k<l;k++)
				{
					a[k]=a[k+1];
					l--;
				}
		}
		
	}
	if(c==1)
	{
		printf("Yes");
	}
}