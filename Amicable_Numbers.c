#include<stdio.h>
int main()
{ int a,b,sum1=0,sum2=0;
scanf("%d%d",&a,&b);
for(int i=1;i<a;i++)
{
    if(a%i==0)
{ 
    sum1+=i; 
    
} 
    
}
for(int j=1;j<b;j++)
{ if(b%j==0){ sum2+=j;
} 
    
}
if(sum1==b&&sum2==a)
{ 
    printf("Amicable");
} 
else
{
    printf("Not Amicable");
} 
    
}