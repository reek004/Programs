// RELATIONAL OPS ARE >=,<=,==,<,>,!=,! 

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    // if(age!=90){
    if (age >= 90)
    {
        printf("You are above 90, you cannot drive\n");
    }
    else
    {
        printf("You can drive\n");
    }
    //    this will break  the program as all non zero elements are true in c

    // if (age = 50)
    // {
    //     printf("Half Century\n");
    // }

    if (age == 50)
    {
        printf("Half Century\n");
    }

    return 0;
}