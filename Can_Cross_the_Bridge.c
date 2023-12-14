#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
    int maxWeight = Z-Y ;
    int maxMangoes = maxWeight/X ;
    printf("%d",maxMangoes);
    return 0;
    
}