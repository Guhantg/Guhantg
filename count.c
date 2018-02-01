#include <stdio.h>
int main()
{ 
    int a,n= 0;
    printf("Enter an integer: ");
    scanf("%d",&n);

    while(n!= 0)
    {
        n /= 10;
        ++a;
    }
    printf("Number of digits: %d",a);
}
