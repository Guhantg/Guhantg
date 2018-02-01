#include <stdio.h>
void main()
{
    int a, i, sum = 0;
    printf("Enter a positive integer:\n");
    scanf("%d",&a);
    for(i=1; i <= a; ++i)
    {
        sum =sum+i;   
    }
    printf("Sum = %d",sum);
    getch();
}
