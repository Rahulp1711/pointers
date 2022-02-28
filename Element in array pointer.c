#include <stdio.h>

#include <stdio.h>

int main()
{
    int a[20],n,i,temp;
    int *p=a;
    printf("Enter How many elements you want in array\n");
    scanf("%d",&n);
    printf("Enter %d array elements\n",n);
  
    for(i=0;i<n;i++)
      scanf("%d",(p+i));
     printf("elements of your array are\n");
      for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    printf("\nWhich elements you want to search:\n");
     scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
       if(p[i]==temp)
         break;
    }
    if(i<n)
    {
    printf("Element present\n");
    printf("%d element found out at index %d in array \n",temp,i);
    }
    else 
    printf("Element Not present\n");
    return 0;
}