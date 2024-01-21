#include<stdio.h>
int main()
{
	int i,j=1,k;
	FILE *f1,*f2;
	char c,c1,c2;
	f1=fopen("FILE1","w");
	while((c1=getchar())!=EOF)
	{
		putc(c1,f1);
	}
	fclose(f1);
	f2=fopen("FILE2","w");
	while((c2=getchar())!=EOF)
	{
		putc(c2,f2);
	}
	fclose(f2);
	f1=fopen("FILE1","r");
	f2=fopen("FILE2","r");
	while((c1=getc(f1))!=EOF && (c2=(getc(f2))!=EOF))
	{
		printf("hello");
		if(c1!=c2)
		{
			j=0;
			printf("The strings are not equal");
			break;
		}
	}
	fclose(f1);
	fclose(f2);
	

	if(j==1)
	{
		printf("The strings are equal");
	}

}