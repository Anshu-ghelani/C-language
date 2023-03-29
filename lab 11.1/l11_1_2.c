#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
   
    int *ptr,*ptr2;
	
	ptr=&a;
	ptr2=&b;
	
	printf("The swap of two variable is :\n");
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%d\n",*ptr);
	printf("b=%d",*ptr2);
}
