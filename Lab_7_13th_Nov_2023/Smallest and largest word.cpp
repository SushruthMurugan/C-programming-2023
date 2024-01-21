// smallest and largest word

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n,max=0,min=100;
	char a[100][100],c[100],d[100];
	printf("Enter number of words in string");
	scanf("%d",&n);
	printf("Enter the string");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(l>max)
		{
			max=l;
			strcpy(c,a[i]);
		}
		if(l<min)
		{
			min=l;
			strcpy(d,a[i]);
		}
		
	}
	printf("The largest word is %s",c);
	printf("The smallest word is %s",d);
	
	
}