// C program to check whether a number is odd or even
#include <stdio.h>

int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);    
    if (a % 2 == 0)
    {
        printf("%d is even \n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }

    return 0;
}