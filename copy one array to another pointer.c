#include <stdio.h>

int main()
{
    int a[20],a1[20],n,i,choice;
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
    printf("1.First array elements copy into Second array\n2.Second array elements copy into First array\n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:for(i=0;i<n;i++)
                   p1[i]=p[i];
                printf("After copying elements your Second array elements are\n");
                 for(i=0;i<n;i++)
                   printf("%d ",p1[i]);
                printf("\nAfter copying elements your First array elements are\n");
                 for(i=0;i<n;i++)
                   printf("%d ",p[i]);
                   break;
         case 2:for(i=0;i<n;i++)
                   p[i]=p1[i];
                 printf("After copying elements your First array elemts are\n");
                 for(i=0;i<n;i++)
                   printf("%d ",p[i]);
                 printf("\nAfter copying elements your Second array elements are\n");
                 for(i=0;i<n;i++)
                   printf("%d ",p1[i]);
                   break;
        default:printf("wrong choice\n");
    }
    return 0;
}
