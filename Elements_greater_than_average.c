#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    int ar[a]; 
    for(int i=0;i<a;i++)
    { 
        scanf("%d",&ar[i]);
        sum+=ar[i]; 
        
    } int avg=sum/a,c=0;
    for(int i=0;i<a;i++)
    { 
        if(avg<=ar[i])
        { c++;
} } 
printf("%d",c);
}