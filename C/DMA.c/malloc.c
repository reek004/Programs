#include <stdio.h>
#include <stdlib.h>
int main()
{   int n;
    printf("Enter the numbers you want to enter : ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(100 * sizeof(int));
    int *p = ptr;
    for(int i = 1 ; i<=n;i++){
        scanf("%d",p);
        p++;
    }
    p = ptr;
    for(int i = 1 ; i<=n;i++){
        printf("%d \n",*p);
        p++;
    }
    free(ptr);
}