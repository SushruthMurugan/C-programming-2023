//deleting all repeating characters 
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n;
	char a[100];
	printf("Enter the string");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				i--;
			}

		}
	}
	printf("The final string is %s",a);
	
}