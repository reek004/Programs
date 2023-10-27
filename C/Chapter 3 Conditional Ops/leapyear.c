// C program to check whether
#include <stdio.h>

int main()
{
     int year;
     printf("Enter the year /n ");
     scanf("%d", &year);
     (year%4==0) ? printf("%d was a leapyear",year): printf("%d was not a leapyear",year);
    
     

    return 0;
}