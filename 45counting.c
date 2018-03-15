#include<stdio.h>
void main()
{
    int a,c=0;
    printf("Enter the Number\n");
    scanf("%d",&a);
    while(a!=0)
    {
        a/=10;
        ++c;
    }
    printf("%d",c);
}
