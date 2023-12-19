#include<stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    if (N%3 == 0 && N%5 == 0 && N%7 == 0)
    {
        printf("PlingPlangPlong");
    }
      else if (N%3 == 0 && N%5 == 0)
    {
        printf("PlingPlang");
    }
    else if (N%3 == 0)
    {
        printf("Pling
");
    }
    else if  (N%5 == 0)
    {
        printf("Plang
");
    }
    else if (N%7 == 0)
    {
        printf("Plong
");
    }
    else
    {
        printf("%d",N);
    }
    return 0;
}