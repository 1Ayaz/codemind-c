#include <stdio.h>
#include <math.h>
int main()
{ int radius; 
scanf("%d" , &radius);
double volume = (4.0 / 3.0) * 3.14* pow(radius, 3);
printf("%.2lf" , volume);
return 0; }