#include <stdio.h>

int main() {

    int a;

    for(a = 1; a <= 10; a++) {
        if(a % 2 == 0) {
            printf("a = %d (even)\n", a);
        } else {
            printf("a = %d (odd)\n", a);
        }
    }
}

