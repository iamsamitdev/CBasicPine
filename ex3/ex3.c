#include <stdio.h>

int main() {
  int A = 50, B = 30, C = 5, D = 3, E = 10;

  // 1.1
  int result1_1 = (A + B) * (E - D);

  // 1.2
  int result1_2 = ++D + C * E;

  // 1.3
  int result1_3 = (25 + A) / C + B;

  // 1.4
  int result1_4 = A *= D;

  // 1.5
  int result1_5 = 20 * C + B++ + D / 2;

  // 1.6
  int result1_6 = -D + C + B--;

  // 1.7
  int result1_7 = 25 * D / 5 + 10;

  // 1.8
  int result1_8 = A += B-- + D;

  // 1.9
  int result1_9 = C * 2 + E * 5;

  // 1.10
  int result1_10 = (A * 2) + B / C - 15;

  // พิมพ์ผลลัพธ์
  printf("1.1: %d\n", result1_1);
  printf("1.2: %d\n", result1_2);
  printf("1.3: %d\n", result1_3);
  printf("1.4: %d\n", result1_4);
  printf("1.5: %d\n", result1_5);
  printf("1.6: %d\n", result1_6);
  printf("1.7: %d\n", result1_7);
  printf("1.8: %d\n", result1_8);
  printf("1.9: %d\n", result1_9);
  printf("1.10: %d\n", result1_10);

  return 0;
}
