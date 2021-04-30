#include<stdio.h>

int main(){
    float a=0, x=0;


    printf("Ejer 20 \n");
    printf("Ingrese el valor angulo A: \n");
    scanf("%f", &a);
    printf("Ingrese el valor angulo B: \n");
    scanf("%f", &x);

    printf("Angulo C : %.2f \n", 180-(x+a));

    system("Pause");
    return 0;


}
