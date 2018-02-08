#include<stdio.h>
void main()
{
int a,b,c,r;
printf("Enter The Number\n");
scanf("%d",&b);
a=0;
c=b;
while(b>0)
  {
   r=b%10;
   a=a+r*r*r;
   b=b/10;
   }
if(a==c)
    {
     printf("Armstrong Number");
    }
else
{
printf("Not Armstrong");
}
}
