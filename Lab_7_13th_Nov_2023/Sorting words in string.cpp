#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,n;
	char a[100][100],m[100];
	printf("Enter the number of words");
	scanf("%d",&n);
	printf("Enter the names of the string ");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}


	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(m,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],m);
			}
		}
	}
	printf("The string after sorting the characters is ");
	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
}

