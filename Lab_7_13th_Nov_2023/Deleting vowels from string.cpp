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
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			n--;
		}

	}
	printf("The string after deleting vowels is ");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	
}