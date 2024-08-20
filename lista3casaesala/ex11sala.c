#include <stdio.h>

int main() {
    // Write C code here
    int t , num , resul ;
    t = 0;
    printf("Entre com o número: ");
    scanf( "%i" , &num);
    
    while (t <= 10){
        resul = num * t;
        printf("%i \n", resul);
        t = t + 1;
        
        
        
    }
    
}