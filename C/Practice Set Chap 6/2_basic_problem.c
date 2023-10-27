#include<stdio.h> 
void var(int a){
    printf("The adress of i is %u\n",&a);
} //----> This will have a different address as on;y a copy of value is passed
int main(){
    int i=4;
     printf("the value of i is %d\n",i);
     var(i);
     printf("the adress of i is %u\n",&i);


    return 0;
}
