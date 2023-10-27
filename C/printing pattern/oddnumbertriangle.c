#include<stdio.h> 
 
int main(){
     int i,j,n,a;
     int *ptr;
     ptr = &n;
     printf("Number of lines ");
     scanf("%d",ptr); 
     for ( i = 1; i <= n; i++)
     {
        a=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
     }
     
    return 0;
}