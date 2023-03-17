#include<stdio.h>

int main()

{
    int r,c,i,j,a[r][c],sumd=0;

  
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
	        if(i==j)
	        {
	        	sumd=sumd+a[i][j];
			}
			
		}
		
	}
	
    printf("\nSum of diagonal  is : %d",sumd);
	
	return 0;
}
