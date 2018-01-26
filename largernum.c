#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&c)
    printf("The Larger Number is %d",a);
    else
    {
        if(b>c)
        printf("The Larger Number Is %d",b);
        else
        printf("The Larger Number Is %d",c);
    }
    getch();
}
