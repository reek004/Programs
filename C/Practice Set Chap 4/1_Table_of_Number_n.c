// Program to Print Table Of any Given Number

#include<stdio.h> 
 
int main(){
     int i;
     int n;
   //  bujhe ne nijei likhe chis code ta 
     printf("enter any number\n");
     scanf("%d",&n);
     for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
     }
    return 0;
}