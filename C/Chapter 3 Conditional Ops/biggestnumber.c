#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter four diffrent numbers \n ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("The biggest number is %d", num1);
    }

    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("The biggest number is %d", num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("The biggest number is %d", num3);
    }
    else
    {
        printf("The biggest number is %d", num4);
    }

    return 0;
}