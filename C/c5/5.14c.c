#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int c[] = {3, 8, 13, 18, 23, 28, 33};
    srand(time(NULL)); 
    int index = rand() % 7; 
    printf("%d\n", c[index]);
    return 0;
}
