#include<stdio.h>
int main ()
{
    float x,DA,HRA,gross;
    scanf("%f",&x);
    if ( x <= 10000)
    {
        DA = 80 * x / 100;
        HRA =20 * x /100;
        gross = x + DA + HRA;
        printf("%.2f",gross);
    }
    else if (x <= 20000)
    {
        DA = 90 * x / 100;
        HRA =25 * x /100;
        gross = x + DA + HRA;
        printf("%.2f",gross);
    }
    else if (x > 20000)
    {
        DA = 95 * x / 100;
        HRA =30 * x /100;
        gross = x + DA + HRA;
        printf("%.2f",gross);
    }
    return 0;
}