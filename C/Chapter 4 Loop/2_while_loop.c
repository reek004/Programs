#include<stdio.h> 
 
int main(){
     int a ;
     printf("enter the value of a : ");
        scanf("%d",&a);
    while (a<=10)
    // if condition never becomes true the loop will be an infinite loop  
    {
        printf("%d \n",a);
        a++;
    }
    
      return 0;
}