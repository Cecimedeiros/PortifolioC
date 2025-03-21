#include <stdio.h>
#define linhas 12
#define colunas 12

int main(){
    
    char T;
    double M[linhas][colunas], soma= 0.0, media=0.0;
    int C;
    
    scanf("%d", &C);
    scanf(" %c", &T);
    
    for (int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for (int i=0; i< linhas; i++){
        soma= soma + M[i][C];
    }
    
    if (T=='S'){
        printf("%.1lf\n", soma);
        
    } else if(T =='M'){
        media= soma/linhas;
        printf("%.1lf\n", media);
    }

    return 0;
}