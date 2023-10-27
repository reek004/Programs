#include<stdio.h> 
 float forceCalculator(float mass);
int main(){
    float mass;
    printf("Enter the mass :\n");
    scanf("%f",&mass);
     printf("The provided force will be %.2f N", forceCalculator(mass));
    return 0;
}
float forceCalculator(float mass){
    float force = mass*9.8;
    return force;

}