#include<stdio.h>
int main(){
    int i,j,a,n;
    printf("Enter the numbers of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1;
         for(j =1 ;j<=i;j++)
         {
            char ch = (char)a+64;
            if(i%2!=0){
                printf("%d ",a);
            }
            else
            {
              printf("%c ",ch);
            }
            a++;
         }
         printf("\n");
    }
}