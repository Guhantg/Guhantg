#include <stdio.h>
void main() 
{
	int n,i,temp,a[n];
	printf("Enter The Limits  ");
	scanf("%d",&n);
	printf("Enter The Numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]>a[i+1])
	    {
		  temp=a[i];
		  a[i]=a[i+1];
		  a[i+1]=temp;
	    }
	}
	printf("Large is %d\n",a[i]);
	printf("Small is %d",a[0]);
}
