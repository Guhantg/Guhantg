#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Minutes=");
    scanf("%d",&a);
    b=a/60;
    c=a-(b*60);
    printf("Hours=%d,Minutes=%d ",b,c);
}
