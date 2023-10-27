// Calculating Income Tax Using C program
#include <stdio.h>

int main()
{
    float income, tax;
    tax = 0;
    printf("Enter your income : \n");
    scanf("%f", &income);
    if (income > 250000 && income <= 500000)
    {
        tax = tax + (income - 250000) * 0.05;
    }
    if (income > 500000 && income <=1000000)
    {
        tax = tax + (income - 500000) * 0.20;
    }
    if (income > 1000000)
    {
        tax = tax + (income - 1000000) * 0.30;
        printf("your  net payable tax is %.0f ", tax);
    }
    else
    {
        printf("You don't have to pay tax ");
    }
       return 0;
}
