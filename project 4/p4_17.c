#include<stdio.h>

main()
{

int i,j,s,space=4;

 for(i=1;i<=5;i++)
  {
  	for(s=1;s<=space;s++)
  	  {
  	  	printf(" ");
      }
      space--;
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
   }
	
	space=1;
	for(i=2;i<=5;i++)
	{
	  for(s=1;s<=space;s++)
	  {
	  	printf(" ");
	  }
	  space++;
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

  
}
