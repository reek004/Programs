#include<stdio.h> 
 
int main(){
     int i=69;
     int *ptr;
     int **ptr_ptr;
     ptr = &i;
     ptr_ptr = &ptr;
     printf("%u\n",&ptr_ptr);
     printf("%u\n",&ptr);
     printf("%d\n",*(*(*&(ptr_ptr))));
    /* Step one _ The first yellow bracket prints the value at adress of ptr_ptr
    i.e the address of ptr
    Step Two _ then the next  value at operator '*' prints the valur at the adress of ptr 
    i.e the the address of i
    step three_ final step prints the value at value at the 
    address of i i.e the value  of i  */  
    printf("%d",**ptr_ptr);
    return 0;
}