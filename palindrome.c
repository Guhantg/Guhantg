#include<stdio.h>
void main()
{
int a,b,c=0;
printf("Enter the number:");
scanf("%d",&a);
c=a;
while(c!=0)
{
b=b*10;
b=b+c%10;
c=c/10;
}
if(b==a)
printf("The given value is palindrome");
else
printf("The given number is not a palindrome");
}
