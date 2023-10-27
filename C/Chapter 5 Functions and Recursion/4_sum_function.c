#include<stdio.h> 
//  sum is a function which takes a and b as input and 
// returns an integer as an output
 int sum(int a,int b);// function prototype declaration

int main(){
  int c = sum(1,5);//function calling here 1 and 5 are the arguments
  printf("The value will be %d",c);
  return 0;
}
int sum(int a,int b){//--> int a and int b are function parameters 
    int result; // The c variable here is independent and has no connection
    // with the above mentioned variable in main function
    result = a +b;
    return result;
}