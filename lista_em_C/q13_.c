#include <stdio.h>
 
int main() {
    int T;
    scanf("%d", &T);
    
    for (int i=0; i<T; i++){
        
        int PA,PB, tempo= 0;
        float G1, G2;
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        
        while (PA<=PB){
            PA += PA*(G1/100);
            PB += PB*(G2/100);
            tempo++;
            
            if (tempo>100){
                break;
            }
        }
        if (tempo>100){
                printf ("Mais de 1 seculo.\n");
                
            }else{
             printf("%d anos.\n", tempo);
            }
    }
    return 0;
}