#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 20){
        if( i % 2 == 0){
        printf(" É par: %.1i \n" , i);
            
        }
        else{
            printf("É impar: %.1i \n " ,i );
            
        }
        
        i = i + 1;
    }
    

    return 0;
}