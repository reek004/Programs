// Program to Print Table Of any Given Number in reverse order
#include<stdio.h> 
 
     int main(){
     int i;
     int n;
    printf("enter any number\n");
     scanf("%d",&n);
     printf("Multiplication table of %d\n",n );
   
     for(i=10;i;i--){
      // The loop runs Untill i becomes zero, It will stop after i becomes Zero , Here "i" is non zero 
      // therefore loop Will run untill i!=0 
        printf("%d * %d = %d\n",n,i,n*i);
     }
    return 0;
}