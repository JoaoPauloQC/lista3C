#include <stdio.h>

int main() {
    int i = 0;
    do {
        if (i % 2 == 0){
            
        printf( "%i ", i);
        printf( "É par \n");
        
            
        }
        else {
            printf( "%.i " , i  );
            printf ( "É impar \n");
        }
        
        i = i + 1;
    }
    while (i <= 20);
    

    return 0;
}