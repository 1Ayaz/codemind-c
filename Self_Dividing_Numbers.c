#include<stdio.h> 
int self(int);
int main()
{ int a,b;
scanf("%d%d",&a,&b);
for(int i=a;i<=b;i++)
{ if(self(i))
{ printf("%d ",i);
} 
    
} 
    
} 
int self(int i)
{ int r,flag=1,t=i; 
while(i!=0)
{ r=i%10; 
if(r==0||t%r!=0)
{ 
    flag=0; break; 
    
}
i/=10; 
    
} 
if(flag==0)
{ 
    return 0;
}

else{ return 1;
} 
    
}