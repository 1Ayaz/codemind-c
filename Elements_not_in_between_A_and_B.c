#include<stdio.h>
int main()
{ int a; 
scanf("%d",&a);
int ar[a];
for(int i=0;i<a;i++)
{ 
    scanf("%d",&ar[i]);
    }
    int b,c,d=0; 
    scanf("%d %d",&b,&c); for(int i=0;i<a;i++){ if(ar[i]<b||ar[i]>c){ printf("%d ",ar[i]); d++; } } if(d==0)
{ 
    printf("-1");
    } }