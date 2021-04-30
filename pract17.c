#include<stdio.h>

int main(){
    float a=0;
    int x=0;

    printf("Ejer 17 \n");
    printf("Ingrese un valor en centimetros : \n");
    scanf("%f", &a);

    printf("Centimetros en Pies : %i \n", x=(a*30.48));
    printf("Centimetros en Pulgadas : %.1f \n", a*0.393701);
    system("Pause");
    return 0;


}
