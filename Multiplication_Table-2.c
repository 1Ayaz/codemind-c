#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a ,&b);
    for(int i=1 ;i <= b;i++)
    {
        int product = a*i;
        printf("%d x %d = %d
",a,i,product);
    }
    return 0;
}