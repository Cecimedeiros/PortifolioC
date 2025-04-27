#include <stdio.h> 

struct desafio {
    int grade;
    int totalquadradinhos;
}typedef desafio;

int main (){
    desafio quadriculado;
    int N, resposta;
    scanf("%d", &N);
    
    while (N != 0){
        quadriculado.grade = N;
        resposta= (quadriculado.grade * (quadriculado.grade + 1) * (2* quadriculado.grade + 1))/6;
        quadriculado.totalquadradinhos=resposta;
        printf("%d\n", quadriculado.totalquadradinhos);
        scanf("%d", &N);
    }
    
    return 0;
}