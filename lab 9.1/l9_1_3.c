#include<stdio.h>

main()

{
    int i,n;
    printf("Enter the size of string : ");
    scanf("%d",&n);
    
    char c[n];
    
    printf("Enter the sring :");
    scanf("%s",&c);
    
    for(i=0;i<n;i++)
    {
         if(c[i]>=65 && c[i]<=90)
        {
         c[i]+=32;
         printf("%c",c[i]);
        }
    }
}