#include <stdio.h>
#include <string.h>
#define max 1000

char subsequencia[max][max]; 
int cont = 0;

void gerarSubsequencias(char* letras) {
    int len = strlen(letras);
    cont = 0;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int cont2 = 0;
            for (int k = i; k <= j; k++) {
                subsequencia[cont][cont2++] = letras[k];
            }
            subsequencia[cont][cont2] = '\0'; 
            cont++;
        }
    }
}
void organizacao() {
    char temp[max];
    for (int i = 0; i < cont - 1; i++) {
        for (int j = i + 1; j < cont; j++) {
            if (strcmp(subsequencia[i], subsequencia[j]) > 0) {
                strcpy(temp, subsequencia[i]);
                strcpy(subsequencia[i], subsequencia[j]);
                strcpy(subsequencia[j], temp);
            }
        }
    }
}
int main() {
    char letras[max];

    while (fgets(letras, sizeof(letras), stdin)) {
        letras[strcspn(letras, "\n")] = '\0'; 
        gerarSubsequencias(letras); 
        organizacao(); 
        printf("%s\n", subsequencia[0]);
        for (int i = 1; i < cont; i++) {
            if (strcmp(subsequencia[i], subsequencia[i - 1]) != 0) {
                printf("%s\n", subsequencia[i]);
            }
        }
        printf("\n"); 
    }
    return 0;
}