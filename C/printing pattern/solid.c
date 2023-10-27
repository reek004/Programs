#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Number Of Rows: ");
    scanf("%d", &r);
    printf("Enter Number Of columns: ");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++)
    {
        for (int i = 1; i <= c; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}