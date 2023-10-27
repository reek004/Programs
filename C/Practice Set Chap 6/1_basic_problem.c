#include<stdio.h> 
 
int main(){
     int a=3;
     int *ptr;
     ptr = &a;

     printf("The address of a is %u\n",ptr);
     printf("The value of a is %d",*ptr);
    return 0;
}