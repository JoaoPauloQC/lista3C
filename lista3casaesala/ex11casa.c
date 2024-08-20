#include <stdio.h>
#include <math.h>

   
    


  int main() {
    int x , maior , menor , num;
    x = 0;
    
    printf("Digite o numero: ");
    scanf("%i" , &num);
    
    menor = maior = num;
    
    while ( x < 4 ){
         printf("Digite o numero: ");
    scanf("%i" , &num);
    if (num > maior){
        maior = num;
        
    }
    if (num < menor) {
        menor = num;
    }
    x = x + 1;
    }
    printf("O maior é %i \n" , maior , "O menor é %i", menor );
    printf("O menor é %i", menor);
    
    return 0;

  }