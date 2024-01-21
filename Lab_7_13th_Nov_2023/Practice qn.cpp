#include<stdio.h>
int main()
{
	int c;
	FILE *fp,
	fp=fopen("INPUT","w");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
}
