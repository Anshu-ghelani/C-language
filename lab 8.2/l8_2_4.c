#include<stdio.h>

int main()

{
	int r,c,i,j,a[r][c],b[r][c],d[r][c];

    printf("Enter the elements of first array \n");
	printf("\nEnter the number of row of array  : ");
	scanf("%d",&r);
	printf("\nEnter the number of coulm of array  : ");
	scanf("%d",&c);

    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("\nEnter the element a[%d][%d] :",i,j);
    		scanf("%d",&a[i][j]);
    		
		}
	}
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("\nEnter the element a[%d][%d] :",i,j);
    		scanf("%d",&b[i][j]);
    		
		}
	}
	
	

	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		
    		d[r][c]=a[i][j]+b[i][j];
    		printf("%d ",d[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}

