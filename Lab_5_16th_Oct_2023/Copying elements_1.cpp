#include<stdio.h>
int main()
{
int i,n,j,k,l,s;
printf("Enter the value of n");
scanf("%d",&n);
int a[n],b[n];
printf("Enter the values of the array a");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	b[i]=a[i];
}
for(i=0;i<n;i++)
{
	printf(" The array b is %d",b[i]);
}

}


