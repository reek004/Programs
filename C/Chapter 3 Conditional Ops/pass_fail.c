/* Program to find out whether
 a student has passed or failed*/
#include <stdio.h>

int main()
{
   float num1, num2, num3;
   printf("Marks obtain in English out of 100 \n");
   scanf("%f", &num1);
   printf("Marks obtain in Maths out of 100 \n");
   scanf("%f", &num2);
   printf("Marks obtain in Science out of 100 \n");
   scanf("%f", &num3);

   float totalMarkspercentage = ((num1 + num2 + num3) / 3);
   if (num1 < 33 || num2 < 33 || num3 < 33 || totalMarkspercentage < 40)
   {
      printf(" Your total percentage is %f,You failed Try Harder next time . ", totalMarkspercentage);
   }
   else if (num1 > 100 || num2 > 100 || num3 > 100)
   {
      printf("INVALID MARKS. ");
   }

   else
   {
      printf("Your total percentage is %f , CONGRATULATIONS YOU PASSED !!!!! ", totalMarkspercentage);
   }

   return 0;
}