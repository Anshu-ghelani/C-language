#include<stdio.h>

int main()

{
    int r,c,i,j,a[r][c],t[r][c];

  
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
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			t[i][j]=a[j][i];
			
		}
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",t[i][j]);
			
		}
		printf("\n");
	}

	return 0;
}
