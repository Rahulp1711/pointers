#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
    char s[30],s1[30];
    char *p=s,*p1=s1;
    int i;
    printf("Enter first string:\n");
    scanf("%[^\n]s",s);
    __fpurge(stdin);
    printf("Enter second string:\n");
    scanf("%[^\n]s",s1);
    i=strcmp(p,p1);
    if(i==0)
    printf("Both strings are same\n");
    else if(i>0)
    printf("%s is greter than %s\n",s,s1);
    else
    printf("%s is greter than %s\n",s1,s);
    return 0;
}