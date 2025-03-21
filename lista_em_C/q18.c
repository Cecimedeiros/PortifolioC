#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int N[10];
    N[0]= n;
    printf("N[0] = %d\n", n);
    
    for (int i=1; i<10; i++){
        N[i]= N[i-1]+N[i-1];
        printf("N[%d] = %d\n", i, N[i]) ; 
    }
    return 0;
}