#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter The Year\n");
    scanf("%d",&a);
    if(a%4==0)
    printf("It is leap year");
    else
    printf("It is Not Leap year");
    getch();
}
