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
		if(a[i]==' ')
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			n--;
			i--;
		}

	}
	printf("The string after deleting vowels is ");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	
}