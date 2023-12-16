#include<stdio.h>
int main () {
    int X,Y;
    scanf("%d%d",&X , &Y);
    if (Y > X)
    {
    printf("%d",Y - X);
    }
    else
    {
        printf("0");
    }
    return 0;
}