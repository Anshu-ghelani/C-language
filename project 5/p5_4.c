#include <stdio.h>

int main() 
{
    int r,c,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
     printf("Enter the number of coulmns : ");
    scanf("%d",&c);
    
    int a[r][c];
    printf("Enter the elements of the array:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            scanf("%d",&a[i][j]);
        }
    }

    
    int insert_row, insert_column, insert_value;
    printf("Enter the row and column where you want to insert a value: ");
    scanf("%d%d", &insert_row, &insert_column);
    printf("Enter the value to be inserted: ");
    scanf("%d", &insert_value);
    a[insert_row][insert_column] = insert_value;
    printf("New 2D array after insert operation:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    int delete_row, delete_column;
    printf("Enter the row and column of the value you want to delete: ");
    scanf("%d%d", &delete_row, &delete_column);
    a[delete_row][delete_column] = 0; 
    printf("New 2D array after delete operation:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

  
    int update_row, update_column, update_value;
    printf("Enter the row and column of the value you want to update: ");
    scanf("%d%d", &update_row, &update_column);
    printf("Enter the new value: ");
    scanf("%d", &update_value);
    a[update_row][update_column] = update_value;
    printf("New 2D array after update operation:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
