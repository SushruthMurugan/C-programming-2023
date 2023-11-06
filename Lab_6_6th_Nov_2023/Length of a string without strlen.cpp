#include<stdio.h>
int main()
{
	int i,len=0;
	char str[100];
	printf("Enter a string");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++)
	{
		len++;
	}
	printf("The length of the string is %d",len);
}
