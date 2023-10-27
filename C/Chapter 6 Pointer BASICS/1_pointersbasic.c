#include <stdio.h>

int main() {
  int i =8;
  int *j;//------> * is used to declare a pointer
  j = &i; //-----> adress of i is stored at j;
  printf("The address of i is %u\n",&i);
  printf("The address of i is %u\n",j);
  printf("The address of j is %u\n",&j);
  printf("The value of i is %d\n",i);
  printf("The value of i is %d\n",*(&i));//--------(*) using value at address op
  printf("The value of i is %d\n",*j);//------> adress of i is in j
  printf("The value of j is %d\n",*(&j));
    return 0;
}