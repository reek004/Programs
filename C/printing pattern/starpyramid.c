#include<stdio.h> 
 
int main(){
     int i,j,n;
     printf("enter lines ");
     scanf("%d",&n);
     int star_count = 1;
     
      for(i=1;i<=n;i++)
      {   int nsp = n-i;    
          for ( j = 1; j <=nsp; j++)
          {
                 printf(" ");
          }
          for (int k= 1; k<=star_count; k++)
          {
              printf("*");
          }
          printf("\n");
          star_count=star_count+2;
          
      }
     return 0;
}