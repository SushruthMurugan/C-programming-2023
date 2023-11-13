#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,x,m,count=0;
	char a[50];
	printf("Enter the string a");
	gets(a);
	x=strlen(a);
	if(a[0]=='t' && a[1]=='h' && a[2]=='e')
	{
		count=count+1;
	}
	for(i=0;i<500;i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]=='t' && a[i+2]=='h' && a[i+3]=='e')
			{
				count=count+1;
			}
		}
	}
	printf("The frequency of the word 'the' is %d",count);
}
