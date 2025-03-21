#include <stdio.h>
int main (){
    int valores[15], par[5], impar[5], parr=0, imparr=0;
  
    for (int i=0; i<15; i++){
        scanf("%d", &valores[i]);
        
        if (valores[i]%2==0){
            par[parr]= valores[i];
            parr++;
            
            if (parr == 5){
                for (int j=0; j<5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                parr= 0;
            }
        }else {
            impar[imparr]=valores[i];
            imparr++; 
            if (imparr == 5){
                for (int j=0; j<5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                imparr=0;
            }
        }
    }
    for (int j=0; j< imparr; j++ ){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (int j=0; j< parr; j++ ){
        printf("par[%d] = %d\n", j, par[j]);
    }
    
    

    return 0;
}