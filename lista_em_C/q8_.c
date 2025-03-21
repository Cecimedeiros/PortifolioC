#include <stdio.h>
 
int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1,&n2,&n3);
    
    void ordem(int n1, int n2, int n3){
        int maior, intermediario, menor;
        
        if (n1>n2 && n1>n3){
            maior= n1;
                if (n2>n3){
                    intermediario= n2;
                    menor= n3;
                }else{
                    intermediario= n3;
                    menor= n2;
                }
        } else if (n2>n1 && n2>n3){
            maior= n2;
                if (n1>n3){
                    intermediario=n1;
                    menor= n3;
                } else{
                    intermediario= n3;
                    menor= n1;
                }
        } else {
            maior= n3;
                if (n1>n2){
                    intermediario= n1;
                    menor= n2;
                }else{
                    intermediario=n2;
                    menor= n1;
                }
        }
        printf("%d\n%d\n%d\n", menor, intermediario, maior);
    }
    
    ordem(n1, n2, n3);
    printf("\n%d\n%d\n%d\n", n1, n2, n3);
    return 0;
}