#include <stdio.h>

int main()
{
    int a[2][6]={{5,6,8,6,7,6},
                 {1,2,3,4,5,6}};
    int i,j;
    int (*p)[6]=a;
     printf("elements of your array are\n");
     for(i=0;i<2;i++)
      for(j=0;j<6;j++)
        printf("%d ",p[i][j]);
    return 0;
}
