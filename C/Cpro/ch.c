
void ra(int x[10][10]) {
    int rows = 10;
    printf("\n ra \n");

    int random_order[10];  // 建立用於隨機排序的陣列

    for (int i = 0; i < rows; i++) {
        random_order[i] = i;
    }
    for (int i = rows - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = random_order[i];
        random_order[i] = random_order[j];
        random_order[j] = temp;
    }

    int c[10][10];  // 建立用於存儲結果的陣列
    for (int i = 0; i < 10; i++) {
        int original_row = random_order[i];
        for (int j = 0; j < 10; j++) {
            c[i][j] = x[original_row][j];
        }
    }

    // 輸出結果
    printf("\n原始陣列 x:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    printf("\n隨機排列後的陣列 c:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int x[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    ra(x);

    return 0;
}

