#include <stdio.h>

int main() {
    int I, F;
    scanf ("%d %d", &I, &F);
    int contagem_tempo = F - I;
    int contagem_tempoo= (24- I) + F;
    if (F>I){
       printf("O JOGO DUROU %d HORA(S)\n", contagem_tempo);
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", contagem_tempoo);
    }
    return 0;
}
