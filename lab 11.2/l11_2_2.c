#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    int count[10]={0};
    int *ptr;
    ptr=&a[i];
    for(i=0;i<n;i++)
    {
        printf("Enter the element of a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d has printed %d times... \n",i,count[i]);
    }
    return 0;
}
