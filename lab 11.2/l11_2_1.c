#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n],*ptr;
    ptr = &a[0]; 

    for(i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }

    printf("Elements in array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));  
    }
    printf("\nSquare of all numbers: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",(*(ptr+i)* *(ptr+i)));     }

    return 0; 
}
