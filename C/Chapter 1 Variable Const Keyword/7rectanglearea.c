#include <stdio.h>

int main()
{
    int length, breadth;
    printf("enter the length of the rectangle");
    scanf("%d", &length);

    printf("enter the breadth of the rectangle");
    scanf("%d", &breadth);

    printf("the area of the rectangle is %d", 2*length+breadth);

    return 0;
}