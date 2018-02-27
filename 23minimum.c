#include <stdio.h>
int main()
{
 int a,i,c;
 printf("Enter The Size of array");
 scanf("%d",&a);
 int b[a];
 printf("Enter The Values");
 for(i=0;i<a;i++)
 scanf("%d",&b[i]);
 c=b[0];
 for(i=1;i<a;i++)
   {
     if(c>b[i])
     c=b[i];
   }
 printf("The Minimum Is %d",c);
}
