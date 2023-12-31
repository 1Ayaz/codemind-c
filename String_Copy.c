#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    scanf("%[^
]s",s1);
    strcpy(s2,s1);
    printf("%s",s2);
}