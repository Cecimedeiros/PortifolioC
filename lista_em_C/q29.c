#include <stdio.h>

typedef struct colisao{
    int pontos[2];
    int retangulo[8];
}colisao;

int checagem(int rx, int ry, int ret[8]) {
    int minX = ret[0], maxX = ret[0];
    int minY = ret[1], maxY = ret[1];

    for (int i = 2; i < 8; i += 2) {
        
        if (ret[i] < minX){
            minX = ret[i];
        } 
        if (ret[i] > maxX){
            maxX = ret[i];
        }
    }

    for (int i = 3; i < 8; i += 2) {
        if (ret[i] < minY){
            minY = ret[i];
        }
        if (ret[i] > maxY){
            maxY = ret[i];
        }
    }
    
    return (rx >= minX && rx <= maxX && ry >= minY && ry <= maxY);
}

int main() {
    
    int N;
    scanf("%d", &N);
    
    
    for (int i=0; i<N; i++){
        colisao resposta;
        
        for (int j = 0; j < 8; j++) {
            scanf("%d", &resposta.retangulo[j]);
        }
        
        for (int j=0;j<2;j++){
            scanf("%d", &resposta.pontos[j]);
        }
        
        int result= checagem(resposta.pontos[0], resposta.pontos[1], resposta.retangulo);
        printf("%d\n", result);
    }
    return 0;
}