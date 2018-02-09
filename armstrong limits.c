#include <stdio.h>
#include<conio.h>
int main()
{
  int a, b, i, d, e, c;
  printf("Enter two numbers");
  scanf("%d %d", &a, &b);
  printf("Armstrong numbers between %d and %d are: ", a, b);
  for(i=a+1; i<b; ++i)
    {
      d=i;
      e=0;
      while(d!=0)
         {
          c=(d%10);
          e+=c*c*c;
          d/=10;
          }
       if(i==e)
         {
          printf("%d ",i);
         }
    }
  return 0;
}
