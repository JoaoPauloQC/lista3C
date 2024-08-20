#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    float x , y , z ;
    
    x = 0 ;
    y = 1;
    z = 1;
    
    
    
    while ( z <= 15 ){
        x = x + y;
        y = y + x;
        printf("%f %f \n", x , y);
        
        z = z + 1;
        
        
    }
    
}