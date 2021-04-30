#include<stdio.h>

int main(){
    int a=10;
    float b=19.3;
    double d=64.8;
    char c=64;

    printf(" A + B : %f \n", a+b);
    printf(" C + D : %f \n", c+d);
    printf(" D + A : %f \n", (int)d+a);
    printf(" D + B : %f \n", d+b);
    printf(" C + D : %f \n", (float)c+d);
}
