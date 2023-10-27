#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating (1-5)");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("your rating is 1,we will try to improve. \n ");
        break;
    case 2:
        printf("your rating is 2we will try to improve. \n ");
        break;
    case 3:
        printf("your rating is3 ,we will try to improve. \n ");
        break;
    case 4:
        printf("your rating is 4,we will try to improve. \n ");
        break;
    case 5:
        printf("your rating is 5,we are happy to serve! \n ");
        break;
    default:
        printf("Invalid Rating *_* ");
    }

    return 0;
}