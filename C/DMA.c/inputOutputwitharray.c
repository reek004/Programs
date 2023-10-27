#include<stdio.h> 
 
int main(){
     int n;
     printf("Enter the numbers you want to enter : ");
     scanf("%d",&n);
     int arr[20];
     printf("Enter numbers : ");
     for(int i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);

     }
     for(int i=0;i<n;i++)
     {
       printf("%d ",arr[i]);
       
     }
    return 0;
}