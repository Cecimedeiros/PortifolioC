#include <stdio.h>
#include <string.h>

typedef struct participantes{
    int K;
    char idiomanativo [100][21];
} participantes;

int main() {
    participantes S;
    int N;
    scanf("%d", &N);
    getchar();
    
    char resultados[100][21]; 
    
    for (int i=0; i<N; i++){
        scanf ("%d", &S.K);
        getchar();
        
        for (int j=0; j<S.K; j++){
            fgets(S.idiomanativo[j], 21, stdin);
            S.idiomanativo[j][strcspn(S.idiomanativo[j], "\n")]= '\0';
        }
        int igual = 1;
        for (int i = 1; i < S.K; i++){
            if (strcmp(S.idiomanativo[i], S.idiomanativo[0]) != 0){
                igual = 0;
                break;
            }
        }
        if (igual == 1){
            strcpy(resultados[i], S.idiomanativo[0]);
        } else {
            strcpy(resultados[i], "ingles");
        }
    }
    
    for (int i=0; i<N; i++){
        printf("%s\n", resultados[i]);
    }
    
    return 0;
}
