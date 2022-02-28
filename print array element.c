#include <stdio.h>

int main()
{
    int a[20],n,i;
    int *p=a;
    printf("Enter How many elements you want in array\n");
    scanf("%d",&n);
    printf("Enter %d array elements\n",n);
  
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
 
    printf("Your array elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
