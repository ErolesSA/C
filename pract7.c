#include<stdio.h>

int main()
{
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    printf("\nA continuación…\n");
    printf("El sizeof de un char es %d \n", sizeof(c));
    printf("El sizeof de un short es %d \n", sizeof(s));
    printf("El sizeof de un int es %d \n", sizeof(i));
    printf("El sizeof de un long es %d \n", sizeof(l));
    printf("El sizeof de un float es %d \n", sizeof(f));
    printf("El sizeof de un double es %d \n", sizeof(d));
    printf("El sizeof de un long double es %d \n", sizeof(ld));
    system("Pause");
    return 0;

    /*La función sizeof() Para reservar memoria se debe saber exactamente
     el número de bytes que ocupa cualquier estructura de datos.
     Tal y como se ha comentado con anterioridad, una peculiaridad del lenguaje C
     es que estos tamaños pueden variar de una plataforma a otra.*/


}
