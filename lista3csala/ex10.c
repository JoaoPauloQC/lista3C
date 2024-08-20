#include <stdio.h>
#include <ctype.h>  

int main() {
    // Write C code here
    float v1 , v2 , resul;
    int repeatvalue =1;
    
    char op;
    while (repeatvalue == 1) {
        printf("Qual seria a operação?: ");
        scanf(" %c" , &op );
        op = toupper(op);
        if (op == 'S'){
            printf("Encerrando...");
            repeatvalue = 0;
        }
        else {
            printf("Qual o valor 1?: ");
            scanf(" %f" , &v1 );
            printf("Qual o valor 2?: ");
            scanf(" %f" , &v2 );
            
            if (op == '+'){
                resul = v1 + v2;
                printf("%f \n" , resul );
                
        }
            else {
            if (op == '-'){
                resul = v1 - v2;
                printf("%f \n" , resul );
        }
            else {
            if (op == '*'){
                resul = v1 * v2;
                printf("%f \n" , resul );
        }
        else {
            if (op == '/'){
                resul = v1 / v2;
                printf("%f \n" , resul );
        }
        else{
            printf("inválido");
        }
    }
        }

}
}
}

    return 0;

}