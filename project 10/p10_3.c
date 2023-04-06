#include<stdio.h>

main()
{
	FILE *t,*t1,*t2;
	int a,b,i;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter last number : ");
	scanf("%d",&b);
	
	t=fopen("p10_3_w1.c","w");
	t1=fopen("p10_3_w2.c","w");
	t2=fopen("p10_3_w3.c","w");
	
	if(t==NULL && t1==NULL && t2==NULL)
	{
		printf("you cannot open this file. ");
	}
	else
	{
		printf("you can open this file.");
		
		for(i=1;i<=b;i++)
    	{
	        if(i%2==0)
	       {
	   	     fprintf(t,"%d ",i);  
	       }
	       else
	       {
	       	 fprintf(t1,"%d ",i);
		   }   
	   }
	}
}

