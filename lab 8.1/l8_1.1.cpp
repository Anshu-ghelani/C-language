#include<stdio.h>

int main()

{
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);
	 
	 int a[n],i;
	 
	 for(i=0;i<n;i++)
	 {
	 
	 printf("Enter  %d element : ",i+1);
	 scanf("%d",&a[i]);
	 
     }
     printf("The array is : ");
     for(i=0;i<n;i++)
     {
     	
     	printf("%d ",a[i]);
	 }
	 
     return 0;
	 
}
