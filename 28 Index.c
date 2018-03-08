#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("Enter the limit");
    scanf("%d",&n);
    printf("Enter the element");
    for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
    printf("The Elements with index\n");
    for(i=0;i<n;i++)
     {
       printf("%d %d\n",i,a[i]);
     }
}
