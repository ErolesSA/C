#include<stdio.h>

int main(){
    float a=0, x=0;


    printf("Ejer 19 \n");
    printf("Ingrese la cantidad de Kg  : \n");
    scanf("%f", &a);
    printf("Valor del Kg  : \n");
    scanf("%f", &x);

    printf("Total a pagar : %.2f \n", x*a);

    system("Pause");
    return 0;


}
