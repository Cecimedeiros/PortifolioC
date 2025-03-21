#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int A,B,C, maiorAB, maioroutro, maiordetodos;
    scanf("%d %d %d", &A, &B, &C);
    maiorAB= (A + B + abs(A-B))/2;
    maioroutro= (maiorAB + C + abs(maiorAB - C))/2;
    maiordetodos= (maioroutro + maiorAB + abs(maiorAB - maioroutro))/2;
    printf("%d eh o maior\n", maiordetodos);
    return 0;
}