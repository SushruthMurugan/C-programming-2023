#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,m,n,l,max,min;
	char c,d;
	int freq[256];
	for(i=0;i<256;i++)
	{
		freq[i]=0;
	}
	char a[100];
	printf("Enter the string");
	gets(a);
	l=strlen(a);
	for(i=0;i<256;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[j]==i)
			{
				freq[i]++;
			}

		}
	}
	max=freq[0];
	min=100;
	for(k=1;k<256;k++)
	{
		if(max<freq[k])
		{
			max=freq[k];
			c=k;
		}
	}
	printf("The maximum repeated character is %c",c);
	for(m=1;m<256;m++)
	{
		if(min>freq[m] && freq[m]>=1)
		{

				min=freq[m];
				d=m;
			

		}
	}
	printf("The minimum repeated character is %c",d);
	return 0;
	
}