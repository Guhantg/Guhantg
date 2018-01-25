#include<stdio.h>
#include<conio.h>
void main()
{
    char G;
    clrscr();
    printf("Enter\n");
    scanf("%c",&G);
    if((G>='a' && G<='z')||(G>='A' && G<='Z'))
    printf("It is an Alphabet\n");
    else
    printf("It is not an alphabet\n");
    getch();
}
