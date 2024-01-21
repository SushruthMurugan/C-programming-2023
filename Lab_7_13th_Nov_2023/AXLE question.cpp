//AXLE question
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n,count;
	char str[50];
	gets(str);
	n=strlen(str);
	for(i=1;i<n+1;i++)
	{
		for(j=0;j<n-i+1;j++)
		{
			count=0;
			char s[i+1];
			for(k=j;k<j+i;k++)
			{
				s[count++]=str[k];
			}
			s[count]='\0';
			printf("%s \n",s);

		}
	}
}