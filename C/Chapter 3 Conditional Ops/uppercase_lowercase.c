#include<stdio.h> 
 
int main(){
     char ch;
     printf("enter a letter \n");
     scanf("%c",&ch);
    //  Ascii value of 'A' is 65 && value of 'Z' is 90
     if(ch >= 'A' && ch <= 'Z' )
     printf("the  letter is upper case\n");
    // Ascii value of 'a' is 97 && value of 'z' is 122
     else if(ch >= 'a' && ch <= 'z')
     printf("the letter is lower case\n");
    
     else 
     printf("the letter is not an english letter\n");

    return 0;
}