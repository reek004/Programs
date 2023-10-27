//program to print first n nautral number using for loop 
#include<stdio.h> 
 
int main(){
    int i;
    printf("enter a number  \n");
    scanf("%d",&i);
for(int n=0 ; n<i ; n++){
        printf("number is %d \n",n+1);
     }
    return 0;
}