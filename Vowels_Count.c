#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],c=0,count=0;
    scanf("%[^
]s",s);
    while(s[c]!=NULL)
    {
    if(s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'||s[c]=='u'||s[c]=='A'||s[c]=='E'||s[c]=='I'||s[c]=='O'||s[c]=='U')
    count++;
    c++;
    }
     printf("%d",count);
}