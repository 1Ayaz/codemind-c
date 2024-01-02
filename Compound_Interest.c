#include<stdio.h> 
#include<math.h>
int main()
{ float p,r,t,i; 
scanf("%f%f%f",&p,&r,&t);
i=p*(pow(1+r/100,t)-1);
printf("%.2f",i);
return 0; }