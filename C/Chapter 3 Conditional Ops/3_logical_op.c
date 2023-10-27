// Logical operators are !,&&,||

#include<stdio.h> 
 
int main(){
   int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    
    if (age <= 70 && age>=25 ) //---->and 
    {    printf("You are above 25 and below 70 , you should marry someone \n");
    }
    else if( age == 72 || age == 74){//-----> or
        printf("hello mate");
    }
    else if (!(age < 75)){
        printf("hello there");
    }
    else
    {
        printf("You shouldn't marry \n");
    }   
    return 0;
} 