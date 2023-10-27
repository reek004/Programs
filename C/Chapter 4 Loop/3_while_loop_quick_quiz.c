// Program to print  natural numbers 10 ---> 20 ,  whenninitail loop counter "i" is initialized as 0

#include<stdio.h> 
 
int main(){
     int i=0;
    
    while ( i <= 20)
    // is true 
     {
        if (i>=10)
        // for the first 10 times is not true
        {
           printf("The value of i %d \n", i);
           }
          i++;
        
         //i = i+1

       
     }
     
    return 0;}