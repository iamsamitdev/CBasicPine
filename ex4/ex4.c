#include <stdio.h>

int main() {
  float weight, height, bmi; // ประกาศตัวแปรน้ำหนัก ส่วนสูง และ BMI

  printf("Enter weight in kilograms: ");
  scanf("%f", &weight); // รับค่าน้ำหนัก

  printf("Enter height in meters: ");
  scanf("%f", &height); // รับค่าน้ำหนักและส่วนสูง

  bmi = weight / (height * height); // คำนวณค่า BMI

  // ตรวจสอบค่า BMI และแสดงผลลัพธ์
  if (bmi < 18.5) {
    printf("Underweight\n"); // ผอม
  } else if (bmi >= 18.5 && bmi < 25) {
    printf("Normal weight\n"); // ปกติ
  } else if (bmi >= 25 && bmi < 30) {
    printf("Overweight\n"); // อ้วน
  } else {
    printf("Obese\n"); // อ้วนมาก
  }

  return 0;
}
