#include <stdio.h>
#define LINHA 12
#define COLUNA 12

int main(){
    int L;
    char T;
    double M[LINHA][COLUNA], soma=0.00, media=0.00;
    
    scanf(" %d", &L);
    scanf(" %c", &T);
    
    
    for (int i=0; i<LINHA; i++){
        for (int j=0; j<COLUNA; j++){
            scanf(" %lf", &M[i][j]);
        }
    }
    for (int j=0; j<COLUNA; j++){
        soma= soma + M[L][j];
    }
    
    if (T=='S'){
        printf("%.1lf", soma);
    }
    else if(T=='M'){
        media= soma/COLUNA;
        printf("%.1lf", media);
    }
    
    return 0;
}