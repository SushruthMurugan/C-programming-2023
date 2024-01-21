#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n,c=0;
	char a[100][100];
	printf("Enter the number of words of the string");
	scanf("%d",&n);
	printf("Enter the values of the string");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
		{
			if((a[i][j]=='0'||a[i][j]=='1'||a[i][j]=='2'||a[i][j]=='3'||a[i][j]=='4'||a[i][j]=='5'||a[i][j]=='6'||a[i][j]=='7'||a[i][j]=='8'||a[i][j]=='9'))
			{
				printf("Invalid string");
				j=100;
				i=n;
			}

		}

	printf("The length of the last word is %d",strlen(a[n-1]));	
}
}