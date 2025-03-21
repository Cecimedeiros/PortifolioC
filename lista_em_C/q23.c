
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int X[N], menor, posicao;
    menor= X[0];
    
    
    for (int i=0; i<N; i++){
        scanf("%d", &X[i]);
    }
    for (int i=1; i<N; i++){
        if (X[i]<menor){
            menor = X[i];
            posicao = i;
        }else{
            continue;
        }
    }
    printf("menor: %d\n", menor);
    printf("posicao: %d\n", posicao);
    
    return 0;
}