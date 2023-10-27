// Sum and Average using Pointers and call by reference
#include <stdio.h>
void sumAndAverage(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = ((float)*sum) / 2;
}

int main()
{
    int i = 3;
    int j = 4;
    int sum;
    float avg;
    sumAndAverage(i, j, &sum, &avg);
    printf("Sum = %d\n",sum);
    printf("Average = %.02f\n",avg);

    return 0;
}