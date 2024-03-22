#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    char *text[] = {
        " ZER ", " ONE ", " TWO ", " THR ", " FOR ", " FIV ", " SIX ", " SVN ", " EGT ", " NIN "
    };

    // ประกาศตัวแปรไว้เก็บเลขที่สุ่ม
    char str_digit[10];

    // กำหนดค่าเริ่มต้นให้ rand()
    srand(time(0));

    // ประกาศตัวแปรค่าที่สุ่ม
    int x;

    // บรรทัดที่ 1 (ตัวเลข)
    char line1[100];
    // บรรทัดที่ 2 (ตัวอักษร)
    char line2[100];

    // สุ่มเลข 6 หลัก
    for(int i = 0; i < 6; i++) {
        x = rand() % 10;
        // แสดงผลลัพธ์
        sprintf(str_digit, "  %d  ", x);
        strcat(line1, str_digit);
        strcat(line2, text[x]);
    }

    // แสดงผลลัพธ์
    printf("%s\n%s\n", line1, line2);
    
    return 0;
}