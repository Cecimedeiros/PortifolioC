#include <stdio.h>
#include <string.h>

enum nCorretos {
    one= 1, two=2, three=3
};

struct caracteristicasNumero {
    char palavra[10];
    enum nCorretos numero;
    
}typedef caracteristicasNumero;

int quantErros(char* number, char* corretas){
    int quantidade_erros = 0;

    for (int i = 0; number[i] != '\0' && corretas[i] != '\0'; i++) {
        if (number[i] != corretas[i]) {
            quantidade_erros++;
        }
    }

    return quantidade_erros;
}


int main() {
    caracteristicasNumero number;
    char* corretas[]= {"one", "two", "three"};
    int N, i=0;
    scanf("%d", &N);
    getchar();
    
    while (i<N){
        fgets(number.palavra, sizeof(number.palavra), stdin);
        number.palavra[strcspn(number.palavra,"\n")]= '\0';
          
        if (strlen(number.palavra) == 5){
            if (quantErros(number.palavra, corretas[2]) <= 1){
                number.numero = three;  
                printf("%d\n", number.numero);
                }
              
        } else if (strlen(number.palavra) ==3){
            if (quantErros(number.palavra, corretas[0]) <= 1){
                number.numero = one;
                printf("%d\n", number.numero);
            } else if (quantErros(number.palavra, corretas[1]) <= 1) {
                number.numero = two;
                printf("%d\n", number.numero);
            }
        }
          
        if (i>1000){
            break;
        }
          
        i++;
    }
    
 
    return 0;
}