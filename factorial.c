#include<stdio.h>
void main()
{
    int a,b=1,i;
    printf("Enter The Number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    b=b*i;
    }
    printf("The Factorial Of %d is %d",a,b);
    return 0;
}
