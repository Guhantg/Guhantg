#include<stdio.h>
void main()
{
    int a[10],b,i;
    printf("Enter The Limits");
    scanf("%d",&b);
    printf("Enter The Numbers");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
    printf(" %d  %d\n",i,a[i]);
    }
}
