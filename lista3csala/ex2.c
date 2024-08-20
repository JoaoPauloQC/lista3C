#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 20){
        if( i % 2 == 0){
        printf("%.1i \n" , i);}
        i = i + 1;
    }
    

    return 0;
}