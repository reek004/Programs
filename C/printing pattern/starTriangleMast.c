#include<stdio.h> 
 
int main(){
     int i,j,k,n;
     printf("Enter the number of lines ");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
        for ( j = 1; j <= n-i; j++)// for spaces
        {
            printf(" ");
        }
          for ( k = 1; k <= i; k++)//for stars
        {
            printf("*");
        }
        printf("\n");
     }
    return 0;
}