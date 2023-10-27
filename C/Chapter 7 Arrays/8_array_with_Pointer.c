#include<stdio.h> 
 
int main(){
     int marks[5];
     int *ptr;
     //ptr = &marks[0];
     ptr=marks;
     for(int i=0;i<5;i++)
     {
        printf("Enter a the marks for student %d :",i+1);
        scanf("%d",ptr);
        ptr++;

     }
     for (int i = 0; i < 5; i++)
     {
        printf("The number for student %d is %d \n",i+1,marks[i]);

     }
     
    return 0;
}