#include<stdio.h>
int main()
{ int a,rev=0;
int org;
scanf("%d",&a);
org=a;
while(a!=0)
{ int r=a%10;
rev=rev*10+r;
a/=10; 
    
} 
if(org==rev)
printf("True"); 
else printf("False");
}