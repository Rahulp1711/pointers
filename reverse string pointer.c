#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
    char s[30],ch;
    char *p=s;
    int i,j;
    printf("Enter first string:\n");
    scanf("%[^\n]s",s);
    for(i=0,j=strlen(p)-1;i<=j;i++,j--)
    {
        ch=p[i];
        p[i]=p[j];
        p[j]=ch;
    }
    printf("%s",p);
}