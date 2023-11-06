#include<stdio.h>
int main()
{
	int i,n,min;
	float avg;
	int b=0;
	int max=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array a");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b=b+a[i];
		}
	min=a[0];
	avg=float(b)/n;
	printf("The average is %f",avg);
	for(i=0;i<n;i++)
		{
			if (max<a[i])
				max=a[i];
		}
	printf("\nThe maximum is %d",max);
	for(i=0;i<n;i++)
		{
			if(min>a[i])
				min=a[i];
		}
	printf("\nThe minimum is %d",min);
}
