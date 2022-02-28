#include<stdio.h>
int main()
{
    int a[30],temp,n;
    int *p=a;
    int i,j;
    printf("Enter how many elements you want in array\n");
    scanf("%d",&n);
    printf("Enter %d array elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>0;i--)
      for(j=0;j<i;j++)
          if(p[j]>p[j+1])
          {
             temp=p[j];
             p[j]=p[j+1];
             p[j+1]=temp;
          }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}