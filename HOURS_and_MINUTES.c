#include<stdio.h>
int main() {
    int totalMinutes, hours, minutes;
    scanf("%d", &totalMinutes);
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("%d Hour(s) %d Minute(s)
", hours, minutes);

    return 0;
}

