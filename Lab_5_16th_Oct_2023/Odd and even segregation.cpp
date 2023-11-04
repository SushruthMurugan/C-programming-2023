#include<stdio.h>
int main()
{
int i,n,j,k,l,s,ce=0,co=0,q=0,w=0;
printf("Enter the value of n");
scanf("%d",&n);
int a[n],b[n],c[n];
printf("Enter the values of the array a");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{
		b[q]=a[i];
		q+=1;
		ce+=1;
	}
	else
	{
		c[w]=a[i];
		w+=1;
		co+=1;
	}

}
printf("\nThe array of even no is ");
for(i=0;i<ce;i++)
{
	printf("%d ",b[i]);
}
printf("The array of odd no is ");
for(i=0;i<co;i++)
{
	printf("%d ",c[i]);
}
}

