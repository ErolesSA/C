#include<stdio.h>

int main(){
    int a, b, c, d=0, e=1; //0 corresponde a falso
    int x=2, y=3;

    a=5>3;
    printf("A = %i", a);
    printf("\n");
    b=((4<5) && (2>2));
    printf("B = %i", b);
    printf("\n");
    a=!e;
    printf("A2 es %i", a);
    printf("\n");
    b=((x%2 == 0) || (x-y <10));
    printf("B2 es %i", b);
    printf("\n");
    c=(d && e);
    printf("C es %i", c);
    printf("\n");
    c=(d || e);
    printf("C2 es %i", c);
    printf("\n");
    c=!(d && e);
    printf("C3 es %i", c);
    printf("\n");
    c=(! d) && (!e);
    printf("C4 es %i", c);
    printf("\n");
    c=(a && (!a));
    printf("C5 es %i", c);
    printf("\n");
    c=(((x<=(y*3.2)) && (y%2!=0))|| (1));
    printf("C6 es %i", c);
    printf("\n");



}
