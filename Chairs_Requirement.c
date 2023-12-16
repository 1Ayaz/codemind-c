#include<stdio.h>
int main ()
{
    int X,Y,required;
    scanf("%d%d",&X ,&Y);
    if (X > Y)
    {
        required = X - Y;
        printf("%d",required);
    }
    else
    {
        printf("0");
    }
    return 0;
}