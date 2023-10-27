#include<stdio.h> 
 
int main(){
     int i,j,n;
     printf("Number of lines :");
     scanf("%d",&n);
     int d=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",d);
            d=d+2;
        }
        printf("\n");
        }
    return 0;
}