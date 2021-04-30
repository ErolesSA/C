#include<stdio.h>

int main(){
    float a=0, b=0;


    printf("Ingrese un valor A: \n");
    scanf("%f", &a);
    printf("Ingrese un valor B: \n");
    scanf("%f", &b);

    printf("La suma de A + B : %.2f\n", a+b);
    printf("La resta de A - B : %.2f\n", a-b);
    printf("El producto  de A * B : %.2f\n", a*b);
    printf("La divicion de A + B : %.2f\n", a/b);
    printf("El promedio de A y B : %.2f\n", (a+b)/2);
    printf("El doble producto del primero menos la mitad del segundo. : %.2f\n", (2*a)-(b/2));


}
