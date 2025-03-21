#include <stdio.h>

int main() {
    double X;
    scanf("%lf", &X);

    if (X> 0.00 && X<=2000.00){
        printf("Isento\n");

    }else if (X>2000.01 && X<=3000.00){
        double imposto= ((X-2000)* 0.08);
        printf("R$ %.2lf\n", imposto);

    }else if(X>3000.01 && X<=4500.00){
        double imposto2= ((1000.00 * 0.08) + ((X-3000) * 0.18));
        printf("R$ %.2lf\n", imposto2);
    }else if (X>4500.00){
       double imposto3= (1000.00 * 0.08) + (1500.00 * 0.18) + ((X-4500.00)* 0.28);
       printf("R$ %.2lf\n", imposto3);
    }
    return 0;
}
