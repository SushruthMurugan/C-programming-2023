#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	printf("Enter the data");
	fp=fopen("INPUT","w");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
	fp=fopen("INPUT","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
