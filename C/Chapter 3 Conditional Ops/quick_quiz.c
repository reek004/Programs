// Program to find grade of a student given his marks with Switch Case
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
switch(marks/10)
   {
       case 10 :
       case 9 :
        //     Marks between 90-100 
           printf("\n Your Grade is: A");
           break;
       case 8 :
            // Marks between 80-89 
           printf("\n Your Grade is B" );
           break;
       case 7 :
            // Marks between 70-79 
           printf("\n Your Grade is C" );
           break;
       case 6 :
        //    Marks between 60-69 
           printf("\n Your Grade is D" );
           break;
       default :
        //    Marks less than 60 
           printf("\n You Grade is  F or Fail\n");
   }

    return 0;
}