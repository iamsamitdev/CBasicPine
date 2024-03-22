#include <stdio.h>

void swap(float *x, float *y){
    float temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    float x = 66.10, y = 99.11;

    printf("Before swap: x = %g, y = %g\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %g, y = %g\n", x, y);

    return 0;
}