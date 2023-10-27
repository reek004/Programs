#include <stdio.h>
 // Driver code 

int main()
{
// Program to print the sum of any table
  int i,n,sum=0;
  printf("Enter a Number :\n");
scanf("%d",&n);
for (i=0;i<=10;i++){
sum += (n*i);
}
printf("%d",sum);
  return 0;
}