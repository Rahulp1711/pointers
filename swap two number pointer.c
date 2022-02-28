#include <stdio.h>

int main()
{
    int a,b,temp;
    int * p=&a,*p1=&b;
    printf("Enter the 2 numbers for swapping\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping : a=%d ,b=%d\n",*p,*p1);
    
    temp=*p;
    *p=*p1;
    *p1=temp;
    
    printf("After swapping : a=%d ,b=%d\n",*p,*p1);
    return 0;
}
