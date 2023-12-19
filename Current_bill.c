#include <stdio.h>

int main() {
    int units;
    float totalAmount, surcharge = 0;
    scanf("%d", &units);

    
    if (units <= 199) {
        totalAmount = units * 1.20;
    } else if (units >= 200 && units < 400) {
        totalAmount = units * 1.50;
    } else if (units >= 400 && units < 600) {
        totalAmount = units * 1.80;
    } else {
        totalAmount = units * 2.00;
    }
    if (totalAmount > 400) {
        surcharge = totalAmount * 0.15;
    } else  {
        surcharge = 100;
    }

    totalAmount += surcharge;

    
    printf("%.2f
", totalAmount);

    return 0;
}
