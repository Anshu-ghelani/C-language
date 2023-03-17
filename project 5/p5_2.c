#include <stdio.h>

int main() 
{
    int r,c;
    printf("Enter the number of rows  of the array:\n");
    scanf("%d",&r);
    printf("Enter the number of columns of the array:\n");
    scanf("%d",&c);

    int a[r][c];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<r;i++)
     {
        for(int j=0;j<c;j++)
         {
            scanf("%d",&a[i][j]);
         }
     }

    int max1 = a[0][0], max2 = a[0][0];
    for(int i=0;i<r;i++)
     {
        for(int j=0;j<c;j++)
         {
            if(a[i][j] > max1)
             {
                max2=max1;
                max1=a[i][j];
            }
            else if(a[i][j]>max2 && a[i][j]!=max1)
             {
                max2=a[i][j];
             }
        }
    }

    printf("The second largest element in the array is: %d\n", max2);

    return 0;
}
