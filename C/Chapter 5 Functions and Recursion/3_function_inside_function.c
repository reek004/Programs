// Calling Function from a Function
#include<stdio.h> 
void goodMorning();
void goodAfternoon(); //-------> function prototype
void goodNight();
int main()
{
    goodMorning(); //----> function call
    return 0;
}
void goodMorning()
{
    printf("Good Morning\n");
   goodAfternoon(); //------> Indirectly calling
}
void goodAfternoon()
{
    printf("Good Afternoon\n");
    goodNight();
} //-------> function Decleration

void goodNight()
{
    printf("Good Night\n");
}