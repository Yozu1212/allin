#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reverseOrderSwap(int arr[][10], int row) {
    int start = 3;
    int end = 7;
    
    while (start < end) {
        int temp = arr[row][start];
        arr[row][start] = arr[row][end];
        arr[row][end] = temp;
        
        start++;
        end--;
    }
}

void printArray(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[10][10];

    // 生成?机?填充??
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = j;
        }
    }

    printf("Original Array:\n");
    printArray(array, 10, 10);

    // ?倒每一行的?序
    for (int i = 0; i < 10; i++) {
        reverseOrderSwap(array, i);
    }

    printf("Array after reverse order swap:\n");
    printArray(array, 10, 10);

    return 0;
}

