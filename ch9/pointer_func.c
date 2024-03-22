#include <stdio.h>

void dec(int *num){
    *num -= 1;
}

int main(){

    int x = 10;

    // Pass the address
    dec(&x);

    printf("x = %d\n", x);

    return 0;
}