#include <stdio.h>
//  ----> Jugaru __code
int main()
{
    int i, n, prime=1;
    printf("Enter a number  :");
    scanf("%d", &n);
    // if (n == 2)
    // {
    //     printf("%d is a Prime Number", n);
    // } -----> Not the right Procedure

    for(i = 2; i < n; i++){
        if(n % i == 0)
        {                         // DRY RUN 
                                            /* AS prime is initialized to 1 , jokhon 2 dicchi loop ta run korche na 
                                            r prime er value 1 e thakche tai theek output dicche*/

            prime = 0;
           break;
        }

    }
     if(prime==1){
        printf("%d is a Prime Number", n);
        
     }

        else
        {
            printf("%d is not a Prime Number", n);
        }
    return 0;
}



//  --------.Using While Loops

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
