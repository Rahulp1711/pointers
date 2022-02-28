#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
    char s[30],s1[30];
    char *p=s,*p1=s1;
    printf("Enter first string:\n");
    scanf("%[^\n]s",s);
    __fpurge(stdin);
    printf("Enter second string:\n");
    scanf("%[^\n]s",s1);
    strcpy(p,p1);
    printf("%s\n",s);
    printf("%s\n",s1);
    return 0;
}