#include <stdio.h>

int main()
{
    int a = 10,b=60;
    int * p=&a,*p1=&b;
    printf("Addition of %d and %d is : %d",*p,*p1,*p+*p1);
    return 0;
}
