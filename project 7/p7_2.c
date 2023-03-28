#include<stdio.h>
sum(int a[], int b)
{
   int result=0,i;
   printf("Enter the size of array : ");
   scanf("%d",&b);
   printf("Enter elements :\n");
   for(i=0;i<b;i++)
   {
   	 scanf("%d",&a[i]);
   }
   for(i=0;i<b;i++)
   {
   	 result+=a[i];
   }
   return result;
}
main()
{
	int i,a[50],result;
	result=sum(a,i);
	printf("\nThe sum of given elements is :%d",result);
}
