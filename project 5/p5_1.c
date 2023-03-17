#include<stdio.h>

int main()

{
	int i,j,r,c;
	
	printf("Enter the number of row : ");
	scanf("%d",&r);
	printf("Enter the number of coulmn : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the elements of a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]<0)
			{
				printf("\nThe negative element of array is : %d",a[i][j]);
			}
		
		}
	}
	
	return 0;
}
