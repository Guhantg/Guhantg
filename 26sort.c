#include<stdio.h>
void main()
{
    int n,b[10],a=0,j,i;
     printf("Enter The Limits");
    scanf("%d",&n);
    printf("Enter The Numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(b[i]>b[j])
           { 
               a=b[i];
               b[i]=b[j];
               b[j]=a;
            }
       }
    }
   
     if(n%2==0)
     {
         printf("%d\n",(b[n/2]+b[(n/2)-1])/2);
     }
     else
     {
         printf("%d\n",b[(n-1)/2]);
     }
}
