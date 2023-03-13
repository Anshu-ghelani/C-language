#include<stdio.h>

int main()

{
	 int n,count=0,sum=0;
	 float avg;
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
     	sum=sum+a[i];
	 }
	 avg=sum/count;
	 printf("\n----------------\n");
	 printf("The number of element is : %d",count);
	 printf("\nThe avarage of the array is : %f",avg);
     return 0;
	 
}
