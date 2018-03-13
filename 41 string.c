#include<stdio.h>
void main()
{
    char a[10];
    int b,i;
    printf("Enter String\n");
    scanf("%s",&a);
    printf("Enter Number of Times");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        printf("%s\n",a);
    }
    
}
