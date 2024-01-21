//Max and min character in string 

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,max,min;
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
	min=freq[0];
	for(i=1;i<l;i++)
	{
		if(max<freq[i])
		{
			max=freq[i];
		}
	}
	printf("The maximum repeated character is %c",i);
	for(i=1;i<l;i++)
	{
		if(min>freq[i])
		{
			min=freq[i];
		}
	}
	printf("The minimum repeated character is %c",i);
	return 0;


	
}