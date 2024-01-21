//deleting repeated char
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m;
	char a[100];
	printf("Enter the string");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<l;k++)
				{
					a[k]=a[k+1];
					
				}
				l--;
			}
		}
	}
	printf("Updated string is");
	puts(a);
}