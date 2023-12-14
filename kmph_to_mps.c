#include<stdio.h>
int main (){
    float kmph;
    scanf("%f",&kmph);
    float mph = 5 * kmph /18 ;
    printf("%.2f",mph);
    return 0;
    
}