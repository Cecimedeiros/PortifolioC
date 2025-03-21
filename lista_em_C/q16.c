#include <stdio.h>
void organizar (int vetor [3]){
    for (int i=0; i<3; i++){
        for (int j= i+1; j<3; j++){
            if (vetor[i] > vetor[j]){
               int temp= vetor[i];
               vetor[i]= vetor[j];
               vetor[j]= temp;
            }
        }
    }
}
int main() {
    
    int vetor[3], primeira_versao[3];
    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    primeira_versao [0]= vetor[0];
    primeira_versao [1]= vetor[1];
    primeira_versao [2]= vetor[2];
    organizar(vetor);
    printf("%d\n%d\n%d\n", vetor[0], vetor[1], vetor[2]);
    printf("\n");
    printf("%d\n%d\n%d\n", primeira_versao[0], primeira_versao[1], primeira_versao[2]);
    return 0;
}