// Factorial of any number using for loop
#include<stdio.h> 
 
int main(){
     int i=1,n,factorial=1;
     printf("Enter a Number\n");
     scanf("%d",&n);
    //  --->    Using For Loop
    //  for(i=1;i<=n;i++){
    //     factorial *= i;
    //  }
    //------> Using While Loop
    while(i<=n){
      
         factorial *= i;
           i++;
    }
    printf("The factorial of %d is = %d",n,factorial);

    return 0;
}