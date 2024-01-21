#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	char c;
	printf("Enter the contents of the file 1");
	f1=fopen("FILE1","w");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f1=fopen("FILE1","r");
	f2=fopen("FILE2","w");
	while((c=getc(f1))!=EOF)
	{
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	f2=fopen("FILE2","r");
	printf("The contents of file 2 are");
	while((c=getc(f2))!=EOF)
	{
		printf("%c",c);
	}
	fclose(f2);

	
	
}