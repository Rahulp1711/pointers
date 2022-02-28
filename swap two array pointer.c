

#include <stdio.h>

int main()
{
    int a[20],a1[20],n,i,temp;
    int *p=a,*p1=a1;
    printf("Enter How many elements you want in array\n");
    scanf("%d",&n);
    printf("Enter %d first array elements\n",n);
  
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    
    printf("Enter %d second array elements\n",n);
  
    for(i=0;i<n;i++)
    {
        scanf("%d",(p1+i));
    }
     printf("Before swaping elements of your First array\n");
      for(i=0;i<n;i++)
        printf("%d ",p[i]);
    printf("\nBefore Swaping elements of your Second array array\n");
     for(i=0;i<n;i++)
        printf("%d ",p1[i]);
    for(i=0;i<n;i++)
    {
       temp=p[i];
       p[i]=p1[i];
       p1[i]=temp;
    }
    printf("\nAfter swaping elements of your First are\n");
      for(i=0;i<n;i++)
        printf("%d ",p[i]);
    printf("\nAfter Swaping elements of your Second array are\n");
     for(i=0;i<n;i++)
        printf("%d ",p1[i]);
                   
    return 0;
}
