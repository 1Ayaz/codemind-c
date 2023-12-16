#include <stdio.h>

int main() {
    int X, halfWeight;
    scanf("%d", &X);
if (X <= 2 || X % 2 != 0) {
        printf("NO
");
    }
    else {
        halfWeight = X / 2;
        if (halfWeight % 2 == 0) {
            printf("YES
");
        }
        else {
            halfWeight--;
            if (halfWeight > 0) {
                printf("YES
");
            }
            else {
                printf("NO
");
            }
        }
    }

    return 0;
}
