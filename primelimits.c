#include<stdio.h>
void main()
{
    int a,b,c,i;
    printf("Enter The Limits\n");
    scanf("%d %d",&a,&b);
    while(a<b)
    {
        c=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        printf("Prime Numbers Are %d\n",a);
        ++a;
    }
    return 0;
}
