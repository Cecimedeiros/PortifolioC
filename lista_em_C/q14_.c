#include <stdio.h>
 
int main() {
    double total=0;
    int opcao, cachorro=0, salada=0, bacon=0, torrada=0, refri=0, quantidade=0;
    
    scanf("%d %d", &opcao, &quantidade);
    switch (opcao){
        case 1: 
            cachorro++;
            break;
        case 2:
            salada++;
            break;
        case 3:
            bacon++;
            break;
        case 4:
            torrada++;
            break;
        case 5:
            refri++;
            break;
        default:
            break;
        }
        
    total= ((quantidade * cachorro) *4.00) + ((quantidade* salada) * 4.50) + ((quantidade * bacon) *5.00) + ((quantidade * torrada) * 2.00) + ((quantidade *refri) *1.50);
    
    printf("Total: R$ %.2lf\n", total);
    return 0;
}