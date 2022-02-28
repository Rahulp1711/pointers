#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("Enter string:\n");
    scanf("%[^\n]s",s);
    printf("string length of your string is %ld",strlen(s));
    return 0;
}