#include<stdio.h>

main()

{
	
	int n,i;

	printf("Enter the size of the string : ");
	scanf("%d",&n);
	
	char c[n];
	
	printf("Enter the string : ");
	scanf("%s",&c);
	
	printf("\nThe string in Togglecase : \n\n");
	for(i=0;i<n;i++)
	{
		if(c[0]>=97 && c[0]<=122)
		{
			c[0]-=32;
		    
	    }
	   
	}
    for(i=0;i<n;i++)
    {
    	 printf("%c",c[i]);
	}
		
}
