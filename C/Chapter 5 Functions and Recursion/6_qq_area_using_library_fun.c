//NORMAL APPROACH

 
// int main(){
//     int a,side;
//     printf("Enter the value of side",side);
//     scanf("%d",&side);
//      a = area(side);
//      printf("The area is %d",a);
//     return 0;
// }
// int area(int a){
//  int total;
//  total = a*a;
//  return total;
// }


//////////////////////    USING LIBRARY FUNCTION     ////////////////
#include<stdio.h>
#include<math.h>
int main(){
    //khankir chele harry
    int side;
    printf("Enter the length of side\n");
    scanf("%d",&side);
    printf("The area of the square is %.0f",pow(side,2));
    // TWO things I would like to learn "pow()" is a library function from the library <math.h>
    // pow() returns value in double so I used "%f"there
return 0;
}
