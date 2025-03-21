#include <stdio.h>

int main() {
    int opcao;
    int alcool=0, gasolina=0, diesel=0;
    scanf ("%d", &opcao);

    while (opcao !=4){
        switch (opcao){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
        }
        scanf("%d", &opcao);

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
