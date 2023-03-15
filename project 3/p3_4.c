#include<stdio.h>

main()
{
	
	int n,rem,div,fd,ld,count=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem = n%10 ;
		div = n/10 ;
		if(count==0)
		{
			ld=rem ;
		}
		n = div ;
		count++;
	}
	
	fd = rem ;
	
	printf("\nThe sum of the first and the last digit is : %d",ld+fd);
	
	
}
