#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the number of row : ");
    scanf("%d", &r);
    printf("Enter the number of coloumn : ");
    scanf("%d", &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}