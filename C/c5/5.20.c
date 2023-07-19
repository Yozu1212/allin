#include <stdio.h>
void drawRectangle(int w, int h, char fillCharacter) {
    int i, j;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}
int main() {
    int w = 4;
    int h = 5;
    char fillCharacter = '@';
    drawRectangle(w, h, fillCharacter);
    return 0;
}
