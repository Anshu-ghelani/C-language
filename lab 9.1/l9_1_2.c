#include<stdio.h>

main()

{
    
    char c;
    
    printf("Enter the character :");
    scanf("%c",&c);
    
    if(c>=97 && c<=122)
    {
       c-=32;
    }
    printf(" %c",c);
}