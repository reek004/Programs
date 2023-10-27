#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,len,start , end;
    start = 0;
    scanf("%d", &n);
    len =  (n*2)-1;
    end  = len - 1;
    int arr[len][len];
  	// Complete the code to print the pattern.
      while(n!=0){
      for(int i = start ; i <= end  ; i++){
          for(int j = start ;j <= end ;j++){
                if(i == end || j == end  || i == start  || j== start ){
                    arr[i][j]=n;
                } 
                start++;
                end--;
                n--;
          
      }}}
       for(int i = 0 ; i <  len ; i++){
          for(int j = 0 ;j <= len ;j++){
           printf("%d",arr[i][j]);
          }
          printf("\n");
          }
      
    return 0;

}