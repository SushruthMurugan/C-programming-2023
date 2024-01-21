//appending one file at the end of the other
#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	char c;
	printf("Enter the contents of file 1");
	f1=fopen("FILE1","w");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	printf("Enter the contents of file 2");
	f2=fopen("FILE2","w");
	while((c=getchar())!=EOF)
	{
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	f1=fopen("FILE1","a");
	f2=fopen("FILE2","r");
	while((c=getc(f2))!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	fclose(f2);
	f1=fopen("FILE1","r");
	printf("The file contents of updated f1 are");
	while((c=getc(f1))!=EOF)
	{
		printf("%c",c);
	}
	
}