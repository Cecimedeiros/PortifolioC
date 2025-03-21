#include <stdio.h>
 
int main() {
 
   int X[10], tamanho= 10;
   
   for (int i=0; i<tamanho; i++){
       scanf("%d", &X[i]);
       if (X[i] == 0 || X[i]<0){
           X[i]=1;
       }
    printf("X[%d] = %d\n", i, X[i]);
   }
    return 0;
}