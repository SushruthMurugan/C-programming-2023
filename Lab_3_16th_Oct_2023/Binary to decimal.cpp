#include<stdio.h>
#include<math.h>
int main()
{
	int b,i=0,j,k;
	printf("Enter the binary number");
	scanf("%d",&b);
	int no=0;
	while(b>0)
	{
		j=b%10;
		b=b/10;
		no=no+j*pow(2,i);
		i++;	
	}
	printf("The value of the decimal number is %d",no);
}