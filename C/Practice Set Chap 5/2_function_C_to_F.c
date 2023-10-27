#include<stdio.h> 
 float tempConverter(float celcius);
int main(){
    float celcius, farenheit;
    printf("Enter the Temp in Celcius\n");
    scanf("%f",&celcius);
    printf("%.2f",tempConverter(celcius));
     return 0;
}
float tempConverter(float celcius){
    float farenheit =  (celcius * 9 / 5) + 32;
    return farenheit;

}