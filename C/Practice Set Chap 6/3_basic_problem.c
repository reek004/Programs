//Making a funcyon and calling it by reference to multiply its value by ten 
#include<stdio.h>

void increaser(int b,int *a){
  *a = b *10; // ---> storing a value with pointer variable 
  }


int main(){
int i = 5;
int j;
printf("The value of i is %d\n",i);
increaser(i,&j);//passing the address as argument 
printf("The value of i after increment is %d\n",j); // printing the value at the address

}