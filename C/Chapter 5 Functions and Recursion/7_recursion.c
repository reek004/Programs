#include<stdio.h> 
 int factorial();

int main(){
 int x , result ;
 printf("Enter a number : ");
 scanf("%d",&x);
  printf("The factorial of %d is %d",x, factorial(x));

    return 0;
}
int factorial(int x){
    printf("Calling Factorial(%d)\n",x);//---> to see how it works
    if(x==1||x==0){
        return 1;

    }
    else{
        return x * factorial(x-1); //----> function occuring inside a function 

    }

}