#include<stdio.h>
int main ()
{
    int i,a,b;
    scanf("%d%d",&b ,&a);
    for(i = a;b <= i;i--)
    {
        printf("%d ",i);
    }
}