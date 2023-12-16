#include<stdio.h>
int main() {
    int X1,Y1,X2,Y2;
    scanf("%d%d%d%d",&X1 ,&Y1 ,&X2 ,&Y2 );
    int firstCost = X1 + Y1 ;
    int secondCost = X2 + Y2 ;
    if ( firstCost > secondCost)
    {
        printf("%d",secondCost);
    }
    else {
        printf("%d",firstCost);
    }
    return 0;
}