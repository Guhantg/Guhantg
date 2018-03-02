#include<stdio.h>
void main()
{
    int a,b,c,i,n=0;
    printf("Enter the Number");
    scanf("%d",&a);
    printf("Enter First number");
    scanf("%d",&b);
    printf("Enter The Difference");
    scanf("%d",&c);
    for(i=0;i<a;i++)
     {
         n=n+b;
         b=b+c;
     }
     printf("%d",n);
}
