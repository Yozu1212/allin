#include <stdio.h>

int Power(int base, int exponent) {
    if (exponent == 1) { 
        return base;
    } else {
        return base * Power(base, exponent-1); 
    }
}

int main() {
    int base, exponent;
    printf("請輸入底數 base：");
    scanf("%d", &base);
    printf("請輸入指數 exponent：");
    scanf("%d", &exponent);
    printf("%d 的 %d 次方等於 %d\n", base, exponent, Power(base, exponent));
    return 0;
}
