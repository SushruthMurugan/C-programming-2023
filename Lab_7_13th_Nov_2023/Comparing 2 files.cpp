#include<stdio.h>
int main()
{
	int i,j=0,k;
	FILE *f1,*f2;
	char c,c1,c2;
	f1=fopen("FILE1","w");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f2=fopen("FILE2","w");
	while((c=getchar())!=EOF)
	{
		putc(c,f2);
	}
	fclose(f2);
	f1=fopen("FILE1","r");
	f2=fopen("FILE2","r");
	while(((c1=getc(f1))!=EOF) && ((c2=(getc(f2))!=EOF)))
	{
		printf("hello");
		if(c1==c2)
		{
			printf("hi");
			j=0;
		}
		else
		{
			j=1;
			break;
		}
	}
	if(j==0)
	{
		printf("The strings are equal");
		
	}
	if(j==1)
	{
		printf("The strings are not equal");
	}
	fclose(f1);
	fclose(f2);
	
}