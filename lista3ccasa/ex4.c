#include <stdio.h>

int main() {
    // Write C code here
    int p , num  ;
    
    printf("Entre com o número: ");
    scanf( "%i" , &num);
    
    while (p <= 250 ){
        p = num * 3;
        if (p <= 250){
        printf("%i \n", p);
        }
        num = p;
        
        
        
    }
    
}