// Program to print the sum of First N natural Numbers
#include<stdio.h> 
 
int main(){
     int i=0, sum =0, n;
     printf("Enter any number\n");
     scanf("%d",&n);
// -----> Using For Loop
        // for(i=0;i<=n;i++){
        //     sum +=i; // increments sum by i
        //     /* Dry Run ---->
        //     1. i is initialised to zero
        //     2. checks if it is less than equals to n or not 
        //     3. initial Value of i is added to the Variable Sum
        //     4. Value of i is incremented 
        //     5. Checks The condition  if true 
        //     6. Incremented value of i  is added to the integer i
        //     */
        // }
//------> Using While Loop
    //  while(i<=n){
          
    //     sum +=i;
    //      i++;
     
    //  }
//------> Using Do While Loop
    do{
        sum += i;
        i++;
    }while(i<=n);
     printf("The Sum OF first %d natural Number is : %d \n",n, sum);


    return 0;
}