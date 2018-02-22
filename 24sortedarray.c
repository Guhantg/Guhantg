#include<stdio.h>
void main()
{
    int a[10],n,i,j,temp;
    printf("Enter The Array Of Numbers ");
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
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           }
        }
    }
      for(i=0;i<=n;i++)
    {
      printf("%d\n",a[i]);
    }
}
