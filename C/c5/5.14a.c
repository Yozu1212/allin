#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
    srand(time(NULL)); 
    int index = rand() % 10; 
    printf("%d\n", a[index]);
    return 0;
}
