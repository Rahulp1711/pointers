#include <stdio.h>

int main()
{
    int a = 10;
    int * ptr = &a;
    printf("value at the pointer of ptr is %d",*ptr);
    return 0;
}
