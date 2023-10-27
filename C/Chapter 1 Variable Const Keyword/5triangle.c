#include <stdio.h>
// area of triangle
int main()
{
    int a, b;
    printf("enter the length of the base \n");
    scanf("%d", &a);

    printf("enter the height \n");
    scanf("%d", &b);

    int theareaofthetrangle = (a * b) / 2;

    printf("the area of the triangle %d ", theareaofthetrangle);
    return 0;
}