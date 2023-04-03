#include<stdio.h>

struct emp {
	char name[20],roll[20],city[20],c_name[20];
	int id,age,exp;
};

main(){
	
	struct emp e;
	int i,n;
	printf("Enter the number of employee : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    printf("\nEnter the employee name : ")	;
	    scanf("%s",&e.name);
	    
	    printf("Enter the roll in company : ")	;
	    scanf("%s",&e.roll);
	    
	    printf("Enter the city name : ")	;
	    scanf("%s",&e.city);
	    
	    printf("Enter the company name : ")	;
	    scanf("%s",&e.c_name);
	    
	    printf("Enter the id of the employee : ")	;
	    scanf("%d",&e.id);
	    
	    printf("Enter the age of employee : ")	;
	    scanf("%d",&e.age);
	    
	    printf("Enter the year of experience : ")	;
	    scanf("%d",&e.exp);
	    
	    printf("==============================\n");
	   
		printf("The name of employee is :%s\n",e.name);
	    printf("The roll of employee is :%s\n",e.roll);
    	printf("The city name is :%s\n",e.city);
    	printf("The company name is :%s\n",e.c_name);
    	printf("The id of the employee is :%d\n",e.id);
    	printf("The age of employee is :%d\n",e.age);
    	printf("The employee has given year of experience :%d",e.exp);
	  	printf("\n==============================\n");
	}

}
