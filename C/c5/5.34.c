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
    printf("�п�J���� base�G");
    scanf("%d", &base);
    printf("�п�J���� exponent�G");
    scanf("%d", &exponent);
    printf("%d �� %d ���赥�� %d\n", base, exponent, Power(base, exponent));
    return 0;
}
