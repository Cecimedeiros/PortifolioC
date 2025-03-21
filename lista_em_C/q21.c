#include <stdio.h>
 
int main() {
    double N[100];
    double X;
    scanf("%lf", &X); 
    
    N[0] = X;
    N[1] = (X)/2;
    
    printf("N[0] = %.4lf\nN[1] = %.4lf\n", N[0], N[1]);

    for (int i=2; i<100; i++){
        N[i]= N[i-1]/2;
        printf("N[%d] = %.4lf\n", i,N[i]);
    }
    
    return 0;
}
