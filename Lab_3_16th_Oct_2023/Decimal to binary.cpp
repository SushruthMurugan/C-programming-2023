#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,d,count,no;
	printf("Enter the decimal number d");
	scanf("%d",&d);
	no=0;
	i=0;
	j=0;
	while(d>0)
	{
		i=d%2;
		d=d/2;
		no=no+(i*pow(10,j));
		j=j+1;	
	}
	printf("The value in binary is %d",no);
}