#include<stdio.h>

struct Marks{
	char name[10];
	int rno,chem_marks,maths_marks,phy_marks;
};
main()
{
	struct Marks m;
	int i;
	float percentage;
	
	for(i=0;i<5;i++)
	{
		printf("student %d\n",i+1);
		printf("\nEnter the name : ");
		scanf("%s",&m.name);
		printf("Enter the roll number : ");
		scanf("%d",&m.rno);
		printf("Enter the chemistry marks out of 100 : ");
		scanf("%d",&m.chem_marks);
		printf("Enter the maths marks out of 100 : ");
		scanf("%d",&m.maths_marks);
		printf("Enter the physics marks out of 100 : ");
		scanf("%d",&m.phy_marks);
		
		percentage=(m.chem_marks+m.maths_marks+m.phy_marks)/3.0;
		
		printf("The student has got %.2f percentage.",percentage);
		printf("\n==============================================");
	}
}
