#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n1,n2;
	printf("Enter the value of n1");
	scanf("%d",&n1);
	printf("Enter the value of n2");
	scanf("%d",&n2);
	char a[n1+n2-1],b[n2];
	printf("Enter values of string 1");
	scanf("%s",a);
	printf("Enter values of string 2");
	scanf("%s",b);
	for(i=0;i<n2;i++)
	{
		a[n1+i]=b[i];
	}
	printf("The concatenated string is");
	puts(a);
	return 0;	
}