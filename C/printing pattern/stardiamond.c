#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of lines ");
    scanf("%d", &n);
    int stars = 1;
    int nsp = n/2;
    int ml = n/2+1;
    for (i = 1; i <= n; i++)
    {

        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= stars; k++)
        {
            printf("*");
        }
        if(i<ml){
            stars += 2;
            nsp--;
        }
        else{
             stars-=2;
             nsp++;
        }
          printf("\n");
    }
  

    
}
