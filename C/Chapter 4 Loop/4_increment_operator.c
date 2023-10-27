#include<stdio.h> 
 
int main(){
     int i=5;
     printf("the value of i is %d \n",++i);
      //++i ----> this will first increase then print the value of i;
     printf("the value of i is %d \n",i++);
     //i++ ---->this will first print then increase the value of i;
      i+=10;//--->increments i by 10
     printf("the value of i is %d \n",i);
     i-=5;//-->decreases value of i by 5
     printf("the value of i is %d",i);

    return 0;
} 