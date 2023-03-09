#include<stdio.h>

main()
{
    int a,b,c,d;

    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("Enter the value of c :");
    scanf("%d",&c);
    printf("Enter the value of d :");
    scanf("%d",&d);

    (a>b)?(a>c)?(a>d)?printf("a is maximum ...")
		     :(d>b)?(d>c)?printf("d is maximum ...")
				 :(c>b)?printf("c is maximum ...")
				       :(b>a)?printf("b is maximum ...")
					     :printf("a is maximum ...")
			   :(b>c)?printf("b is maximum ...")
				 :printf("c is maximum ...")
	       :(c>b)?(c>d)?printf("c is maximum ...")
			   :(d>b)?printf("d is maximum ...")
				 :(b>c)?printf("b is maximum ...")
				       :printf("c is maximum ...")
		     :(b>d)?printf("b is maximum ...")
			   :printf("d is maximum ...")
	 :(b>c)?(b>d)?printf("b is maximum ...")
		     :(d>c)?printf("d is maximum ...")
			   :printf("c is maximum ...")
	       :(c>a)?(c>d)?printf("c is maximum ...")
			   :printf("d is maximum ...")
		     :(a>d)?printf("a is maximum ...")
			   :printf("d is maximum ...");
    
}
