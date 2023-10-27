#include <stdio.h>

int main()
{ int a, b, c;
    printf("enter the principal amount \n");
    scanf("%d", &a);

    printf("enter the rate of interest \n");
    scanf("%d", &b);

    printf("enter the time in years \n ");
    scanf("%d", &c);
   
    int totalAmount = {a+(a*b*c) / 100} ;
    printf("The value of total amount after %d years is %d", c,totalAmount);
    return 0;
}
