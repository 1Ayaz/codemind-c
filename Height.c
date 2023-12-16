#include<stdio.h>
int main() {
    int x,y;
    scanf("%d%d",&x ,&y);
    int height;
    if ( x > y)
    {
        height = x ;
    }
    else
    {
        height = y ;
    }
    printf("%d",height);
    return 0;
}