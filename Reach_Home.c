#include<stdio.h>
int main() {
    int X,Y;
    scanf("%d%d",&X , &Y );
    int distance = 5*X ;
    if(distance >= Y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    
    }
    return 0;
    
    
}