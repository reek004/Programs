#include<stdio.h> 
 
int main(){
     int arr[10] =  {25,56,45,35,42,89,74,31,45,12};
     for(int i = 0 ; i <= 10; i++){
        if(arr[i]<35){
            printf("Student no %d got marks below 35\n",i);
            
        }
     }
    return 0;
}