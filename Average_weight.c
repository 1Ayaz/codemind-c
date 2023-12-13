#include <stdio.h>

int main() {
    
    float average, boy1Weight, boy2Weight, boy3Weight;

    
    
    scanf("%f %f %f", &average, &boy1Weight, &boy2Weight);

    
    boy3Weight = (3 * average) - (boy1Weight + boy2Weight);

    
    printf("%.f
", boy3Weight);

    return 0;
}