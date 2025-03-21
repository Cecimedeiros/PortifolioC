#include <stdio.h>

int main() {
    int X , primeironumero= 0, segundonumero = 1, fibonacci;
    scanf("%d", &X);

    for (int i=0; i<X; i++){
        if (i==0){
            printf ("%d", primeironumero);
        }else if (i == 1){
            printf(" %d", segundonumero);
        }else {
            fibonacci= primeironumero + segundonumero;
            primeironumero= segundonumero;
            segundonumero= fibonacci;
            printf(" %d", fibonacci);
        }
    }
    printf("\n");
    return 0;
}

