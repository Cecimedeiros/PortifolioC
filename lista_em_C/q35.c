#include <stdio.h>
#include <string.h>

char* divisaoPalavras (char* frase, int tamanho[], char* maiorpalavra){
    int cont =0;
    char copia[100];
    strcpy(copia, frase);
    
    char* separacao= strtok (copia, " ");
    
    while(separacao != NULL){
        tamanho[cont]= strnlen(separacao, 100);
        
        if (tamanho[cont]>=strlen(maiorpalavra)){
            strcpy(maiorpalavra, separacao);
        }
        separacao= strtok (NULL, " ");
        cont++;
    }
    return maiorpalavra;
}

void contagem(char* frase, int tam[]){
    
    char copia[100];
    strcpy(copia, frase);
    char* separacao;
    separacao= strtok(copia, " ");
    int cont=0;
    
    while (separacao != NULL){
        tam[cont]= strlen(separacao);
        printf("%d", tam[cont]);
        separacao= strtok(NULL, " ");
            
        if (separacao !=NULL){
            printf("-");
        }
        cont ++;
        
    }
    printf("\n");
}

int main() {
    char frase[100], maiorpalavra[100]= "";
    int tamanho[100];
    int tam[100];
    
    do{
        fgets(frase, 100, stdin);
        frase[strcspn(frase, "\n")] = '\0'; 
        
        if (strcmp (frase, "0") == 0){
            break;
        }
        else{
            divisaoPalavras(frase, tamanho, maiorpalavra);
            
            contagem(frase, tam);
        }
    } while(1);
 
    printf("The biggest word: %s\n", maiorpalavra);

    return 0;
}