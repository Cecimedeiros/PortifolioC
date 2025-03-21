#include <stdio.h>
#define L 4
#define C 4

int main (){
    int cont = 0;
    double soma=0.0, media=0.0, M[L][C];
    char O;
    scanf("%c", &O);
    
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for (int i=0; i< L; i++){
        for (int j=0; j<C;j++){
            if (j>i && j<C-1-i){
                soma=soma + M[i][j];
                cont ++;
            }
        }
    }
    if (O=='S'){
        printf("%.1lf\n", soma);
    } else if( O == 'M'){
        media=soma/cont;
        printf("%.1lf\n", media);
    }
}