#include <stdio.h>

int Power(int base, int exponent) ;

int main() {
    int base, exponent;
    printf("請輸入底數和指數：");
    scanf("%d%d", &base,&exponent);
    printf("等於%d", Power(base, exponent));
    return 0;
}

int Power(int base, int exponent) {
    if (exponent == 1) { 
        return base;
    } else {
        return base * Power(base, exponent-1); 
    }
}
