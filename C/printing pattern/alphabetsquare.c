#include <stdio.h>
int main()
{
    int r, i, j;
    printf("Enter the number of line: ");
    scanf("%d", &r);
    
    for (i = 1; i <= r; i++)
    {   int a = 1;
        for (j = 1; j <= r ; j++)
        { 
            int d = a + 64;
            char ch = (char)d;

            printf("%c ", ch );
            a++;
        }
        printf("\n");
    }

    return 0;
}