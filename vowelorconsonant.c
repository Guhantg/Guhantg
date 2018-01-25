#include<stdio.h>
#include<conio.h>
void main()
{
    char G;
    clrscr();
    printf("Enter The Letter\n");
    scanf("%c",&G);
    if(G=='a'||G=='e'||G=='i'||G=='o'||G=='u'||G=='A'||G=='E'||G=='I'||G=='O'||G=='U')
    printf("The Letter is Vowel\n");
    else
    printf("The Letter is Consonant\n");
    getch();
}
