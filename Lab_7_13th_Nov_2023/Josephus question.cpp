#include<stdio.h>
int main()
{
	int i,j,k=1,l,m,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=k++;
	}
	while(n>1)
	{
		if(   )
		{
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			n--;
		}
		}
	
		else
		{
		for(i=1;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			n--;
		}	
		}
	}
		
	}

	printf("%d",a[0]);
}