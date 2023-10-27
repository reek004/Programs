// Greeting Functions
#include<stdio.h> 
 void goodMorning();
 void goodAfternoon(); //-------> function prototype
 void goodNight();
int main(){ 
      goodMorning();
      goodAfternoon();  //------> function body
      goodNight();
    return 0;
}
void goodMorning(){
printf("Good Morning\n");
}
 void goodAfternoon(){
    printf("Good Afternoon\n");
    }//-------> function Decleration

 void goodNight(){
    printf("Good Night\n");
    }