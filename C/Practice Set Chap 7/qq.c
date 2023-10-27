// Additon of a number to a pointer
#include<stdio.h> 
 
int main(){
     int a = 34;
     int *ptr = &a;
     printf("The adress of a is %u\n",ptr);
    //  ptr ++;
    //  printf("The adress of a is %u",ptr);    
    int b = 89;
    int *c = &b;
    //Substraction of a pointer
    printf("The adress of is %u\n",c);
    int d = ptr-c;
    printf("%d",d);
    return 0; 
}