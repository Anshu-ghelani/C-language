#include<stdio.h>

struct stud {
	char name[20],crs[20],city[20],scl[20];
	int id,age,std;
};

main(){
	
	struct stud s;
	int i,n;
	printf("Enter the number of student : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    printf("\nEnter the student name : ")	;
	    scanf("%s",&s.name);
	    
	    printf("Enter the course name : ")	;
	    scanf("%s",&s.crs);
	    
	    printf("Enter the city name : ")	;
	    scanf("%s",&s.city);
	    
	    printf("Enter the school name : ")	;
	    scanf("%s",&s.scl);
	    
	    printf("Enter the id of the student : ")	;
	    scanf("%d",&s.id);
	    
	    printf("Enter the age of student: ")	;
	    scanf("%d",&s.age);
	    
	    printf("Enter the standard of student : ")	;
	    scanf("%d",&s.std);
	    
	    printf("==============================\n");
	    printf("The name of student is :%s\n",s.name);
	    printf("The course of student is :%s\n",s.crs);
    	printf("The city name is :%s\n",s.city);
    	printf("The school name is :%s\n",s.scl);
    	printf("The id of the student is :%d\n",s.id);
    	printf("The age of student is :%d\n",s.age);
    	printf("The standard of the student is :%d",s.std);
      	printf("\n==============================\n");
	  
	}
	
}
