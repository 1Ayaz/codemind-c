#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i = 1 ;i <= 12 ;i++)
    {
    int product = N*i;
    printf("%d x %d = %d
",N,i,product);
    }
    return 0;
}