#include<stdio.h>

int main(){
    int a;
    float b;
    char c;

    printf(" Ingrese un dato: \n");
    scanf("%d", &a);
    printf("1 Guarda un entero %d \n", a);

    printf(" Ingrese un dato: \n");
    scanf("%f", &a);
    printf("2 Guarda un flotante : %f", a);

    printf(" Ingrese un dato: \n");
    scanf("%c", &a);
    printf("3 Guarda un caracter : %c", a);

    return(0);
}
