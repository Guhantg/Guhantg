#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter The Number\n");
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
        b=a*i;
        printf("%d\n",b);
    }
    return 0;
}
