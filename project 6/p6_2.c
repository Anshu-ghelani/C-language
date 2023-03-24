#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100];
    
    int i,j,len;
    int isPalindrome=1;
    
    printf("Enter a string: ");
    scanf("%s",s);
    
    len=strlen(s);
    
    for(i=0,j=len-1;i<len/2;i++,j--) 
    {
        if(s[i]!=s[j]) 
        {
            isPalindrome=0;
        }
    }
    
    if(isPalindrome) 
    {
        printf("%s is a palindrome.\n",s);
    } 
    else 
    {
        printf("%s is not a palindrome.\n",s);
    }
    
    return 0;
}
    
