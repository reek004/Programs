// Program to print n natural numbers in reverse order
#include<stdio.h> 
 
int main(){
     int n;
     printf("Enter a number \n");
     scanf("%d", &n);

     for(int i=n; i>0;i--){
        printf("the num is %d \n",i);
     }
    return 0;
}