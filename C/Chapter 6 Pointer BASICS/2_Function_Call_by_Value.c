#include<stdio.h> 
int sum(int a,int b);
int main(){
     int x=4,y=5;
     printf("Value of a and y before function call %d %d\n",x,y);
    printf("The sum of a and y is %d\n",sum(x,y));
    printf("Value of x and y after function call %d %d\n",x,y);/// ------> nothing will change
    return 0;

}
int sum(int a,int b){
    int c=a+b;
    a=500;//---- after changing nothing will happen to x and y in main function as the value in main function is copied onto this
    b=6000;
    return c;

}