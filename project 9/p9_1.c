#include<stdio.h>

struct dis {
   int	inch,feet,inch1,feet1,inch2,feet2;
};
main()
{
	struct dis d;
	
	printf("Enter the first distance : ");
	printf("\nEnter inch : ");
	scanf("%d",&d.inch1);
	printf("Enter feet : ");
	scanf("%d",&d.feet1);
	
	printf("\nEnter the second distance : ");
	printf("\nEnter inch : ");
	scanf("%d",&d.inch2);
	printf("Enter feet : ");
	scanf("%d",&d.feet2);
	
	d.inch=d.inch1+d.inch2;
	d.feet=d.feet1+d.feet2;
	
	while(d.inch>=12)
	{
		d.feet++;
		d.inch-=12;	
	}
	printf("\nThe total distance is %d inch and %d feet.",d.inch,d.feet);

}
