#include <stdio.h>

int main()
{
    int a[20],n,i,j,temp;
    int *p=a;
    printf("Enter How many elements you want in array\n");
    scanf("%d",&n);
    printf("Enter %d array elements\n",n);
  
    for(i=0;i<n;i++)
      scanf("%d",(p+i));
     printf("Before Reversing elements of your array are\n");
      for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    
    for(i=0,j=n-1;i<=j;i++,j--)
    {
       temp=p[i];
       p[i]=p[j];
       p[j]=temp;
    }
    printf("\nAfter Reversing elements of your arrray are\n");
      for(i=0;i<n;i++)
        printf("%d ",p[i]);
   
    return 0;
}
