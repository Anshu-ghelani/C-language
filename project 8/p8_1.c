#include<stdio.h>
main()
{
	int a,b;
	int *ptr,*ptr2;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	ptr=&a;
	ptr2=&b;
	
	printf("\n The sawp of two variable is : ");
      *ptr=*ptr+*ptr2;
      *ptr2=*ptr-*ptr2;
      *ptr=*ptr-*ptr2;
   
    
	
	printf("\na=%d\n",*ptr);
	printf("b=%d",*ptr2);
}
