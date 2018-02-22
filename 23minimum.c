#include <stdio.h>
int main()
{
 int a,i,max;
 scanf("%d",&a);
 int b[a];
 for(i=0;i<a;i++)
 scanf("%d",&b[i]);
 max=b[0];
 for(i=1;i<a;i++)
 {
   if(max>b[i])
   max=b[i];
 }
 printf("%d",max);
}
