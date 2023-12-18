#include<stdio.h>
int main()
{
    char X;
    scanf(" %c",&X);
    if ( X == 'V')
    {
        printf("Violet");
    }
else if (X == 'I')
    {
        printf("Indigo");
    }
    else if (X == 'B')
    {
        printf("Blue");
    }
    else if (X == 'G')
    {
        printf("Green");
    } 
else if (X == 'Y')
    {
        printf("Yellow");
    }
 else if (X == 'O')
    {
        printf("Orange");
    }
 else if (X == 'R')
    {
        printf("Red");
    }
    else 
    {
        printf("-1");
    }
    return 0;

}