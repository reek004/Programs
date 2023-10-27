#include<stdio.h>
int main(){
    int i,j,c,r;
printf("Number of rows :");
scanf("%d",&r);
printf("Number of columns :");
scanf("%d",&c);
for(i = 1;i<=r;i++){
    for(j=1;j<=c;j++){
        if(i==1||i==r||j==1||j==c){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}

}