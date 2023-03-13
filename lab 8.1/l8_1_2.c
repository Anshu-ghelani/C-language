#include<stdio.h>

int main()

{
	 int n,count=0;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);
	 
	 int a[n],i;
	 
	 for(i=0;i<n;i++)
	 {
	 
	 printf("Enter  %d element : ",i+1);
	 scanf("%d",&a[i]);
	 
     }
     printf("\n---------------\n");
     printf("The array is : ");
     for(i=0;i<n;i++)
     {
     	
     	printf("%d ",a[i]);
     	count++;
	 }
	 printf("\n----------------\n");
	 printf("The number of element is : %d",count);
     return 0;
	 
}
