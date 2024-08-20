#include <stdio.h>

int main() {
    int a;
    a = 0;
    while (a < 20){
        if (a % 2 == 0){
           ; 
        }
        else {
            printf(" %i" , a ,  ", " );
        }
        
        a = (a + 1);
    }
    

    return 0;
}