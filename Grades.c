#include <stdio.h>

int main ()
{
    float physics, chemistry, biology, mathematics, computerScience;

    scanf("%f%f%f%f%f", &physics, &chemistry, &biology, &mathematics, &computerScience);
    float totalMarks = physics + chemistry + biology + mathematics + computerScience;
    float percentage = (totalMarks / 500) * 100;
    if (percentage >= 90) {
        printf("Grade A
");
    } else if (percentage >= 80) {
        printf("Grade B
");
    } else if (percentage >= 70) {
        printf("Grade C
");
    } else if (percentage >= 60) {
        printf("Grade D
");
    } else if (percentage >= 40) {
        printf("Grade E
");
    } else {
        printf("Grade F
");
    }

    return 0;
}
