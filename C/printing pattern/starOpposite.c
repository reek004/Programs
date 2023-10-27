#include<stdio.h> 
 
int main(){
     int i,j,n,a;
     int *ptr;
     ptr = &n;
     printf("Enter the number of lines ");
     scanf("%d",ptr);
      
     for(i = 1;i<=n;i++)
     {
       for(j=1;j<=n+1-i;j++){
        printf("* ",j);
       }

       printf("\n");
     }

    return 0;
}