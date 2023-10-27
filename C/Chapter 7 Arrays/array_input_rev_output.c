#include<stdio.h> 
 
int main(){
     int arr[5];
     printf("Enter the elements of array ");
     for(int i = 0 ; i < 5 ; i++){
        scanf("%d",&arr[i]);
     }
     printf("The array printed in reverse ");
     for(int i = 4 ; i >= 0; i--){
        printf("%d ",arr[i]);
     }
    return 0;
}