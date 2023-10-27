#include<stdio.h>
int max_of_four();
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d){ //// These  intergers a,b,c,d does not have any 
//connection with the same named integers in main function
    int biggest=0;
    if (a > b && a > c && a > d)
    {
       biggest = a; 
    }

    else if (b > a && b > c && b > d){
        biggest = b;
    }
    else if (c > a && c > b && c >d) 
    {
       
       biggest = c;
    }
    else //if(d>a && d> b && d> c)
    {
       biggest = d;
    }

    return biggest;
    }