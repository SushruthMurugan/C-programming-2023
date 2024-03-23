#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if((pow(2,i))>n)
		{
			j=pow(2,(i-1));
			i=n;
		}
			
			
	}
	k=((n-j)*2)+1;
	printf("%d",k);
}