#include <stdio.h>
#include <string.h>

int main() {
    int N, posicoes;
    char letras[51];
    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        fgets(letras, sizeof(letras), stdin);
        letras[strcspn(letras, "\n")] = '\0'; 
        scanf("%d", &posicoes);
        getchar();
        for (int j = 0; letras[j] != '\0'; j++) {
            if (letras[j] >= 'A' && letras[j] <= 'Z') {
                letras[j] = ((letras[j] - 'A' - posicoes + 26) % 26) + 'A';
            }
        }
        printf("%s\n", letras);
    }
    return 0;
}
