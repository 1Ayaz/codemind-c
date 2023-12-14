#include<stdio.h>
int main() {
    int X,Y,Z;
    scanf("%d",&X);
    scanf("%d",&Y);
    scanf("%d",&Z);
  int money = (X * 5) + (Y * 10);
  int maxChocolates = money/Z;
    printf("%d",maxChocolates);
    return 0;
    
    
}