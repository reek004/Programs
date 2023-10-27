// // #include <stdio.h>
// // int main()
// // {
// //     int a;
// //     int b;
// //     int count;
// //     printf("enter the value of a:\n");
// //     scanf("%d", &a);
// //     printf("enter the value of b:\n");
// //     scanf("%d", &b);
// //     printf("the integers are :%d %d\n", a, b);
// //     count = (a, b);
// //     if (count != 2)
// //     {
// //         printf("you entered 0%d %d\n", a, b);
// //     }
// //     else
// //     {
// //         printf("you entered %d %d \n", a, b);
// //     }
// //     return 0;
// // }







// #include <stdio.h>

// // int main()
// // {
// //     int num1, num2, num3, num4;
// //     int biggestnum;
// //     printf("Enter num1 \n ");
// //     scanf("%d", &num1);
// //     printf("Enter num2 \n ");
// //     scanf("%d", &num2);
// //     printf("Enter num3 \n ");
// //     scanf("%d", &num3);
// //     printf("Enter num4 \n ");
// //     scanf("%d", &num4);
// //     if (num1 > num2 && num1 > num3 && num1 > num4)
// //     {
// //         printf("The biggest number is %d", num1);
// //     }

// //     else if (num2 > num1 && num2 > num3 && num2 > num4)
// //     {
// //         printf("The biggest number is %d", num2);
// //     }
// //     else if (num3 > num1 && num3 > num2 && num3 > num4)
// //     {
// //         printf("The biggest number is %d", num3);
// //     }
// //     else if (num4 > num1 && num4 > num2 && num4 > num3)
// //     {
// //         printf("The biggest number is %d", num4);
// //     }

// //     return 0;
// // }





// #include <stdio.h>

// // int main() {

// //   double n1, n2, n3;

// //   printf("Enter three numbers: ");
// //   scanf("%lf %lf %lf", &n1, &n2, &n3);

// //   // outer if statement
// //   if (n1 >= n2) {

// //     // inner if...else
// //     if (n1 >= n3)
// //       printf("%.2lf is the largest number.", n1);
// //     else
// //       printf("%.2lf is the largest number.", n3);
// //   }

// //   // outer else statement
// //   else {

// //     // inner if...else
// //     if (n2 >= n3)
// //       printf("%.2lf is the largest number.", n2);
// //     else
// //       printf("%.2lf is the largest number.", n3);
// //   }

// //   return 0;
// // }







// #include<stdio.h>

// int sum ( int a, int b );

// int main(){
// int a,b ;

// printf("enter number  1 :\n ");
// scanf("%d", &a);

// printf(" enter number 2: \n ");
// scanf("%d" , &b);

// int s = sum ( a, b);
// printf(" sum is %d \n ", s);
//  return 0;
// }
// int sum(int a, int b){
//     return a+b ;
// }







// #include <stdio.h>

// int main()
// {
//     int i=2, n, prime=1;
//     printf("Enter a number  :");
//     scanf("%d", &n);
//     // if (n == 2)
//     // {
//     //     printf("%d is a Prime Number", n);
//     // } -----> Not the right Procedure

//     while(i<n)
//     {                                       // DRY RUN 
//                                             /* AS prime is initialized to 1 , jokhon 2 dicchi loop ta run korche na 
//                                             r prime er value 1 e thakche tai theek output dicche*/

            
//         if(n % i == 0)
//         {
//             prime=0;
//             break;
//         } 
//        i++; 

//     }
//      if(prime==1){
//         printf("%d is a Prime Number", n);
        
//      }

//         else
//         {
//             printf("%d is not a Prime Number", n);
//         }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {

//     char ch,s[100],sen[1000];
//         scanf("%c",&ch);
//         printf("%c",ch);
//         scanf("%s",&s);
//         printf("\n%s",s);
//         scanf("%[^\n]s",&sen);
//         printf("\n%s",sen);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int num1,num2;
//     float num3,num4;
//     scanf("%d %d", &num1, &num2);
//     scanf("\n%f %f", &num3, &num4);
//     printf("%d %d\n",num1+num2,num1-num2);
//     printf("%.1f %.1f",num3+num4,num3-num4);
    
	
    
//     return 0;}
#include<stdio.h>
int max_of_four();
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d){
    int biggest=0;
    if (a > b && a > c && a > d)
    {
       biggest = a; 
    }

    else if (b > a && b > c && b > d){
        biggest = b;
    }
    else if (c > a && c > b && c >d) 
    {
       
       biggest = c;
    }
    else //if(d>a && d> b && d> c)
    {
       biggest = d;
    }

    return biggest;
    }
    