#include <stdio.h>

int main(){

	int iUnit; // จำนวนหน่วยน้ำ
	int iTemp; // จำนวนหน่วยน้ำที่เกิน
	int iPay; // ค่าน้ำ

    while(1) {
        printf("Water unit:");
        scanf("%d",&iUnit);

        iPay = 0;

        if(iUnit>100){
            iTemp = iUnit-100;
            iPay = iPay + iTemp*15;
            iUnit = 100;
        }

        if(iUnit>40){
            iTemp = iUnit-40;
            iPay = iPay + iTemp*10;
            iUnit = 40;
        }

        if(iUnit>20){
            iTemp = iUnit-20;
            iPay = iPay + iTemp*7;
            iUnit = 20;
        }

        if(iUnit>10){
            iTemp = iUnit;
            iPay = iPay + iTemp*5;
            iUnit = 10;
        }

        printf("Pay: %d Bath \n", iPay);
        printf("-----------\n");
    }

    return 0;

}