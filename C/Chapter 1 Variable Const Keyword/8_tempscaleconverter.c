/// celsius to fahrenheit converter
#include <stdio.h>

int main()
{
    float celsius;
    printf("enter the temp in celsius \n");
    scanf("%f", &celsius);

    printf("the temp in fahrenheit scale will be %f fahrenheit", (celsius * 9 / 5) + 32);

    return 0;
}