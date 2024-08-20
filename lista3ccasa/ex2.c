
#include <stdio.h>

int main() {
    int a , b;
    a = 1;
    b = 2;
    while (b <= 100){
        a = a + b;
        printf(". %i" , a );
        b = b + 1;
    }  
    return 0;
}