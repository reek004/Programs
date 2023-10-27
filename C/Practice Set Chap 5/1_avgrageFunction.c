#include<stdio.h> 
  int avg(int a,int b,int c);
int main(){
    int num1,num2,num3;
    printf("Enter Three Numbers\n");
    scanf("%d \n %d \n %d",&num1,&num2,&num3); 
    
    printf("The Value of Avg is %d",avg(num1, num2, num3));
    return 0;
}
int avg(int a,int b,int c){
    return (a+b+c)/3;
}