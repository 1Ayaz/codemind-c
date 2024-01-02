#include<stdio.h> 
int main()
{ int a,last,max=0;
scanf("%d",&a);
while(a)
{ last=a%10;
if(last>max)
{
    max=last;
} 
a/=10; 
    
}
printf("%d",max);
}