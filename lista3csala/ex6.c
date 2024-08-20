#include <stdio.h>

int main() {
    int i = 1;
    for ( i = 1 ; i <= 20 ; i++) {
        if( i % 2 == 0){
        printf(" É par: %.1i \n" , i);
            
        }
        else{
            printf("É impar: %.1i \n " ,i );
            
        }
        
        ;
    }
    

    return 0;
}