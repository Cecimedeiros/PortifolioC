#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 200001  

int comparar_strings(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int contar_substrings_diferentes(const char* texto) {
    int tamanho = strlen(texto);
    if (tamanho == 0) return 0;
    
    int max_substrings = tamanho * (tamanho + 1) / 2;
    
    char** substrings = (char**)malloc(max_substrings * sizeof(char*));
    int contador = 0;
    
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j <= tamanho; j++) {
            int tamanho_substring = j - i;
            substrings[contador] = (char*)malloc((tamanho_substring + 1) * sizeof(char));
            strncpy(substrings[contador], texto + i, tamanho_substring);
            substrings[contador][tamanho_substring] = '\0';
            contador++;
        }
    }
    
    qsort(substrings, contador, sizeof(char*), comparar_strings);
    
   
    int total_diferentes = 1; 
    for (int i = 1; i < contador; i++) {
        if (strcmp(substrings[i], substrings[i-1]) != 0) {
            total_diferentes++;
        }
    }
    
    for (int i = 0; i < contador; i++) {
        free(substrings[i]);
    }
    free(substrings);
    
    return total_diferentes;
}

int main() {
    char linha_instrucoes[max];
    char texto_atual[max];
    
    while (scanf("%s", linha_instrucoes) != EOF) {
        texto_atual[0] = '\0';  
        int tamanho_atual = 0;
        
      
        for (int i = 0; linha_instrucoes[i] != '\0'; i++) {
            if (linha_instrucoes[i] == '?') {
                
                int resultado = contar_substrings_diferentes(texto_atual);
                printf("%d ", resultado);
            } else {
                
                texto_atual[tamanho_atual] = linha_instrucoes[i];
                tamanho_atual++;
                texto_atual[tamanho_atual] = '\0';
            }
        }
        
        printf("\n");  
    }
    
    return 0;
}