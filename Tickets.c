#include<stdio.h>
int main() {
    int X;
    scanf("%d",&X);
    int totalCost = X*4 ;
    if (totalCost <= 1000) 
    {
    printf("YES");    
    }
    else
    {
        printf("NO");
    }
    return 0;
}