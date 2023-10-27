#include<stdio.h> 
 
int main(){
     
     FILE *ptr = fopen("REEK.txt","w");
    char str[100] = " New nnacnsa csa vkjbjebavjkbsfkj ";
    fputs(str,ptr);
    fclose(ptr);

    return 0;
}