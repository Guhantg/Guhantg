#include<stdio.h>
void main()
{
    int a[10],b=0,c,n,i;
    printf("Enter The Limits");
    scanf("%d",&n);
    printf("Enter The Numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<n;i++)
      {
        b=b+a[i];
      }
    c=b/n;
    printf("%d",c);
}
