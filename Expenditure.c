#include<stdio.h>
int main ()
{
    int x,y,cost;
    scanf("%d%d",&x ,&y);
    cost = y * 30;
    if (x >= cost )
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
    
}