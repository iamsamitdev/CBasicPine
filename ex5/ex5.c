#include <stdio.h>

int main() {

    for(int a = 1; a <= 100; a++) {
        if(a % 10 == 0) {
            printf("%02d\n", a);
        } else {
            printf("%02d ", a);
        }
        
    }

}