#include<stdio.h>
int main ()
{
    int a,b,x;
    scanf("%d%d%d",&x ,&a ,&b);
    int c = a*1 + b *2;
    if (c >= x)
    {
        printf("Qualify");
    }
    else 
    {
        printf("Not Qualify");
    }
    return 0;
}