#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,c,max=0,p=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	c=4*n;
	int a[c];
	for(j=0;j<4;j++)
	{	k=1;
		for(i=p;i<n;i++)
		{
			a[i]=k++;
		}
		p=p+n-1;
		
	}
	for(i=0;i<c;i++)
	{
		printf("%d",a[i]);
	
	}
	for(i=1;i<c;i++)
	{
		for(j=i;j<c;j++)
		{
			if(a[j]==a[i])
			{
				a[j]=a[j+1];
			}
			c--;
		}
	}
	for(i=0;i<c;i++)
	{	int count=1;
		for(j=i+1;j<c;j++)
		{
			if(a[j]==a[i])
			{
				count++;
			}
		}
		if(max<count)
		{
			max=count;
			m=a[i];
		}
		
	}
	printf("The output is %d",m);

}