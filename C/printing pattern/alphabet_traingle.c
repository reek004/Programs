#include<stdio.h> 
 
int main(){
     int i,j,n,a;
     int *ptr;
     ptr = &n;
     printf("Enter the number of lines ");
     scanf("%d",ptr);

     for(i = 1;i<=n;i++)
     { 
        a=1;
       for(j=1;j<=i;j++){
           int d = a+64;
           char ch = (char)d;
           printf("%c ",ch);
           a++;

       }
       printf("\n");
     }

    return 0;
}