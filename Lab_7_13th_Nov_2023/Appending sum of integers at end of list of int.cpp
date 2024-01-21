// Appending sum of integers after list of integers

#include<stdio.h>
int main()
{
	FILE *f1;
	int i,l,m,n,sum=0;
	int c;
	printf("Enter number of integers");
	scanf("%d",&n);
	f1=fopen("FILE 1","w");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);	
		putw(m,f1);
		sum=sum+m;
	}
	putw(sum,f1);
	fclose(f1);
	f1=fopen("FILE 1","r");
	printf("The updated file is");
	while((c=getw(f1))!=EOF)
	{
		printf("%d ",c);
	}
	fclose(f1);
	
	
	

}