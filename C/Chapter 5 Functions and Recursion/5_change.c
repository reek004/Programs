#include<stdio.h> 
 void change();

int main(){
 int b =90;
 change(b);// -----> This thing here does not work
 printf("%d",b);
     return 0;
}
void change(int a){
 a = 22;

}