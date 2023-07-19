#include <stdio.h>
int isPerfect(int number) {
    int sum = 0;
    int i = 1;
    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}
int main() {
	int i = 1,j = 1;
    for (i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d is a perfect number: ", i);
            for (j = 1; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}



