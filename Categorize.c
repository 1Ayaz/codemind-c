#include <stdio.h>

int main() {
    int height;
    scanf("%d", &height);

    if (height < 150) {
        printf("The person is Dwarf.
");
    } else if (height <= 165) {
        printf("The person is average heighted.
");
    } else if (height <= 195) {
        printf("The person is taller.
");
    } else {
        printf("Abnormal height.
");
    }

    return 0;
}
