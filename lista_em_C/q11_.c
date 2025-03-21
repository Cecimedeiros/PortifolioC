#include <stdio.h>
#include <math.h>
 
int main() {
    double S= 0;
    int numerador, denominador;

    for (int i=1; i<=20; i++){
        numerador = 2 * i -1;
        denominador = pow (2, i - 1);
        S+= (double) numerador/denominador;
    }
    
    printf("%.2lf\n", S);
    return 0;
}