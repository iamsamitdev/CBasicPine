#include <stdio.h>
#include <stdbool.h>

int main(){

    // ชนิดข้อมูลในภาษา C
    int a = 10; // จำนวนเต็ม
    float b = 10.5; // จำนวนจริง
    char c = 'A'; // ตัวอักษร
    double d = 10.87487874444; // จำนวนจริงคูณ
    char str[] = "Hello World"; // สตริง

    // bool
    bool isTrue = true; // จริง
    bool isFalse = false; // เท็จ

    // การแสดงผลด้วย printf
    printf("%d\n", a); // แสดงผลตัวแปร a โดยใช้ %d
    printf("%f\n", b); // แสดงผลตัวแปร b โดยใช้ %f
    printf("%c\n", c); // แสดงผลตัวแปร c โดยใช้ %c
    printf("%lf\n", d); // แสดงผลตัวแปร d โดยใช้ %lf
    printf("%s\n", str); // แสดงผลตัวแปร str โดยใช้ %s
    printf("%d\n", isTrue); // แสดงผลตัวแปร isTrue โดยใช้ %d
    printf("%d\n", isFalse); // แสดงผลตัวแปร isFalse โดยใช้ %d

    return 0;
}