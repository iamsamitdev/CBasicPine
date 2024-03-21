#include <stdio.h>

int main() {
    
    // กำหนดค่าเริ่มต้น
    int i = 1;

    // ทำซ้ำไปเรื่อยๆ จนกว่า i จะมีไม่เกิน 10
    while(i <= 10){
        printf("%d\n", i);
        i++;
    }

    return 0;
}