// this program only prints the greatest values
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
            printf("the greatest number is %d",a);
        else
            printf("the greatest number is %d",c);
        
    }
    else
    {
        if(b>c)
            printf("the greatest number is %d",b);
        else
            printf("the greatest number is %d",c);
        
    }
    
    return 0;
}