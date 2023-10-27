#include<stdio.h> 
 
int main(){
     for(int i=0;i<100;i++){
        printf("Hello %d\n",i);
        if(i==55){
            break;
        }

     }
    return 0;
}