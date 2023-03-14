#include<stdio.h>

int main()

{
    int r,c,i,j,a[r][c],sumd,sum[r];

  
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
	        sumd=sumd+a[i][j];
		}
		sum[i]=sumd;
		sumd=0;
	}
	 for(i=0;i<r;i++)
    {
    	printf("Sum of %d row is : %d\n",i+1,sum[i]);
	}
	return 0;
}
	
