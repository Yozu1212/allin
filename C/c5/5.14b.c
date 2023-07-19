#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int b[] = {3, 5, 7, 9, 11, 13, 15, 17, 19};
    srand(time(NULL)); 
    int index = rand() % 9; 
    printf("%d\n", b[index]);
    return 0;
}
