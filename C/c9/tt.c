#include <stdio.h>

int main() {
    int hour, minute, second;

    printf("??入??值（格式?hh:mm:ss）：");
    scanf("%d:%d:%d", &hour, &minute, &second);

    printf("?取到的??值?：%d 小?, %d 分?, %d 秒\n", hour, minute, second);

    return 0;
}

