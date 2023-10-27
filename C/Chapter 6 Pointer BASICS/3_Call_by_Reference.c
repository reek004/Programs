#include<stdio.h> 
 void swap(int *a,int *b);
 void wrong_swap(int a,int b);
int main(){
     int x=4;
     int y=3;
     printf("Value of a and y before function call %d %d\n",x,y);
     //wrong_swap(x,y);-----> this will call the values by functions nothing will change
     swap(&x,&y);
     printf("Value of a and y after function call %d %d\n",x,y);
    return 0;
}
void wrongswap(int a,int b){
            int temp;
            temp=a;
            a=b;
            b=temp;
}
void swap(int *a,int *b){
         int temp;
         temp = *a;
         *a =*b;
         *b = temp;
}