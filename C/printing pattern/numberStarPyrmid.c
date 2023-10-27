#include<stdio.h> 
 
int main(){
     int n;
     printf("enter lines ");
     scanf("%d",&n);
     int k;
     
     for(int i=1;i<=n;i++)
     { 
      int num = i - 1;
      for(int j=1;j<=n-i;j++){//spaces ka loop
            printf(" ");
      } 
      for(k=1;k<=i;k++)// number traingle
      {
            printf("%d",k);

      }
      for(int l=1;l<=i-1;l++) //extra number thingy 
      { 
        printf("%d",num);
         num--;
      }
  printf("\n");
     }
     return 0;
}