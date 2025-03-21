#include <stdio.h>
int main (){
   
    int T, N[1000];
    scanf("%d", &T);
    
    for (int i=0; i<1000; i++){
        
        for (int j=0; j<T; j++){
            N[j]= j;
        }  
        printf("N[%d] = %d\n", i, N[i%T]);
    }    
    return 0;
}
    
   