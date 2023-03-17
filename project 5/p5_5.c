#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter number of rows of the array: ");
    scanf("%d",&r);
    printf("Enter number of columns of the array: ");
    scanf("%d",&c);
    
    int a[r][c];
    printf("Enter array elements:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++) 
        {   
            printf("Enter the elements of the array a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    
    printf("\nArray rotated to the right:\n");
    for ( i=0;i<c;i++) 
    {
        for (j=r-1;j>=0;j--) 
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
    
    printf("\nArray rotated to the left:\n");
    for (i=c-1;i>=0;i--) 
    {
        for (j=0;j<r;j++) 
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
