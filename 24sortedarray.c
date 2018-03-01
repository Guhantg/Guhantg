#include<stdio.h>
void main()
{
    int a[10],b,n,i,j;
    printf("Enter The SIze Of Array");
    scanf("%d",&n);
    printf("Enter The Numbers\n");
    for(i=1;i<=n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
      for(j=i;j<=n;j++)
       {
         if(a[i]>a[j])
          {
           b=a[i];
           a[i]=a[j];
           a[j]=b;
           }
        }
    }
      for(i=1;i<=n;i++)
    {
      printf("%d\n",a[i]);
    }
}
